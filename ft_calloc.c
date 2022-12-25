/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuewang <yuewang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:10:09 by yuewang           #+#    #+#             */
/*   Updated: 2022/12/10 15:58:04 by yuewang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (nmemb && (nmemb * size) / nmemb != size)
		return (NULL);
	ptr = malloc (sizeof(char) * (nmemb * size));
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, (nmemb * size));
	return (ptr);
}
