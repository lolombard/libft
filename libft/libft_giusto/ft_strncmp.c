/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:33:12 by llombard          #+#    #+#             */
/*   Updated: 2022/10/10 14:30:35 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((p1[i] == p2[i]) && i < n - 1 && (p1[i] != '\0' || p2[i] != '\0'))
		i++;
	if (p1[i] < p2[i])
		return (-1);
	else if (p1[i] > p2[i])
		return (1);
	else
		return (0);
}
