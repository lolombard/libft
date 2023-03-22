/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:21:22 by llombard          #+#    #+#             */
/*   Updated: 2022/10/10 13:40:30 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*pt;
	unsigned char			*cost;

	i = 0;
	pt = (unsigned char *)dest;
	cost = (unsigned char *)src;
	while (i < n)
	{
		pt[i] = cost[i];
		i++;
	}
	return (dest);
}
