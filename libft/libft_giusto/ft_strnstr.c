/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:26:53 by llombard          #+#    #+#             */
/*   Updated: 2022/10/07 14:30:33 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*l;

	i = 0;
	b = (char *)big;
	l = (char *)little;
	if (*l == 0)
		return ((char *)big);
	while (i < len && b[i] != '\0')
	{
		j = 0;
		while (l[j] != 0 && i + j < len)
		{
			if (b[i + j] == l[j])
				j++;
			else
				break ;
		}
		if (l[j] == '\0')
			return (&b[i]);
		i++;
	}
	return (NULL);
}
