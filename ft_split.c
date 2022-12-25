/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuewang <yuewang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:13:42 by yuewang           #+#    #+#             */
/*   Updated: 2022/12/10 16:12:13 by yuewang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_count_word(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str != c)
			count++;
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
	}
	return (count);
}

unsigned int	ft_wordlen(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (tab = ft_calloc (1, sizeof(char *)));
	tab = ft_calloc (ft_count_word(s, c) + 1, (sizeof(char *)));
	if (!tab)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			tab[k] = ft_strndup(&s[i], ft_wordlen(&s[i], c));
			if (!tab[k])
				return (ft_freetab(tab));
			k++;
			i += ft_wordlen(&s[i], c);
		}
	}
	return (tab);
}
