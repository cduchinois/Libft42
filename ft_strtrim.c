/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuewang <yuewang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:23:04 by yuewang           #+#    #+#             */
/*   Updated: 2022/12/15 19:29:16 by yuewang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == '\n' || c == '\t' || c == ' ')
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (s1[i] && (ft_strchr(set, s1[i]) || ft_isspace(s1[i])))
		i++;
	j = ft_strlen(s1);
	while (i < j && (ft_strchr(set, s1[j - 1]) || ft_isspace(s1[j - 1])))
		j--;
	if (i == j)
		return (ft_calloc(1, sizeof(char)));
	return (ft_strndup(&s1[i], j - i));
}

/*#include <stdio.h>
int main ()
{
	char *s;
	s = ft_strtrim("abcdba", "acb");
	printf("%s", s);
	return (0);
}*/