/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:36:47 by llombard          #+#    #+#             */
/*   Updated: 2022/10/11 17:55:05 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;
	int		i;
	int		len1;
	int		len2;

	i = -1;
	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		news = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
		if (news == NULL)
			return (NULL);
		while (s1[++i])
			news[i] = s1[i];
		i = 0;
		while (s2[i] != '\0')
		{
			news[len1 + i] = s2[i];
			i++;
		}
		news[len1 + i] = '\0';
		return (news);
	}
	return (NULL);
}
