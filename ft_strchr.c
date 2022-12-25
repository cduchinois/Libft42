/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuewang <yuewang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:19:09 by yuewang           #+#    #+#             */
/*   Updated: 2022/12/15 18:56:38 by yuewang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
/*recherche la première occurrence du caractère passé en second paramètre 
dans la chaîne de caractères 
spécifiée via le premier paramètre.
Soit le caractère recherché est présent dans la chaîne 
un pointeur sur la première occurrence du caractère vous sera retourné. 
Soit le caractère n'est pas présent >> le pointeur NULL vous sera renvoyé.*/
{
	int	i;
	int	j;

	i = 0;
	j = c % 256;
	while (s[i])
	{
		if (s[i] == j)
			return ((char *)s + i);
		i++;
	}
	if (!c && s[i] == '\0')
		return ((char *)s + i);
	return (0);
}
