/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strldup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuewang <yuewang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:39:56 by yuewang           #+#    #+#             */
/*   Updated: 2022/12/06 19:12:26 by yuewang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strldup(const char *s, size_t size)
{
	char	*tab;
	size_t	i;

	i = 0;
	tab = malloc(sizeof(char) * size);
	if (!tab)
		return (0);
	while (i < size - 1)
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
