/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:47:10 by llombard          #+#    #+#             */
/*   Updated: 2022/10/07 14:48:42 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*pt1;
	unsigned char	*pt2;

	i = 0;
	pt1 = (unsigned char *)s1;
	pt2 = (unsigned char *)s2;
	while (i < n)
	{
		if (pt1[i] < pt2[i])
			return (-1);
		else if (pt1[i] > pt2[i])
			return (1);
		i++;
	}
	return (0);
}
