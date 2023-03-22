/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:52:49 by llombard          #+#    #+#             */
/*   Updated: 2022/10/10 13:43:43 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t				i;
	unsigned char		*pt;

	i = 0;
	pt = (unsigned char *)str;
	while (i < n)
	{
		pt[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
