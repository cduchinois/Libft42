/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuewang <yuewang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:04:56 by yuewang           #+#    #+#             */
/*   Updated: 2022/12/10 13:08:57 by yuewang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_freetab(char **tab)
{
	char	**tmp;

	if (tab)
	{
		tmp = tab;
		while (*tab)
		{
			free(*tab);
			tab++;
		}
		free(tmp);
	}
	return (0);
}
