/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuewang <yuewang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:19:09 by yuewang           #+#    #+#             */
/*   Updated: 2022/12/20 17:57:36 by yuewang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
/*examine les n premiers octets de la zone mémoire pointée par s à la recherche du caractère c. 
Le premier octet correspondant à c (interprété comme un unsigned char) arrête l'opération.
renvoient un pointeur sur l'octet correspondant
ou NULL si le caractère n'est pas présent dans la zone de mémoire concernée.*/
{
	const char	*ptr;
	size_t		i;
	int			j;

	ptr = (const char *)s;
	j = c % 256;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == j)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
