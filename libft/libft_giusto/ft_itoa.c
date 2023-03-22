/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:02:52 by llombard          #+#    #+#             */
/*   Updated: 2022/10/12 17:50:45 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	kstr(long int n)
{
	size_t	k;

	if (n == 0)
		return (1);
	k = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		k++;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	numb;
	int			k;

	k = kstr(n);
	numb = n;
	if (n < 0)
		numb = -numb;
	k = k + (n < 0);
	str = ft_calloc(k + 1, 1);
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = 48;
	while (numb > 0)
	{
		str[--k] = numb % 10 + 48;
		numb = numb / 10;
	}
	return (str);
}
