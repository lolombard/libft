/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:27:43 by llombard          #+#    #+#             */
/*   Updated: 2022/10/12 12:27:56 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*p;

	if (start < ft_strlen(s))
	{
		p = (char *)malloc(sizeof(char) * (len + 1));
		if (s == NULL || p == NULL)
			return (NULL);
		i = 0;
		while (len--)
		{
			p[i] = s[start + i];
			i++;
		}
		p[i] = '\0';
	}
	else
		p = (char *)malloc(sizeof(char));
	return (p);
}
