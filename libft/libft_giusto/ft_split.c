/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:58:15 by llombard          #+#    #+#             */
/*   Updated: 2022/10/12 15:00:49 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	cstr(char *s, char c)
{
	size_t	i;
	size_t	n;

	n = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			n++;
		i++;
	}
	if (ft_strlen(s) >= 2 && s[i - 1] != c)
		n++;
	return (n);
}

size_t	sc(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	counts;
	size_t	k;
	char	**krist;

	i = 0;
	k = 0;
	counts = cstr((char *)s, c);
	krist = (char **)malloc((counts + 1) * sizeof(char *));
	if (!krist)
		return (NULL);
	if (s[0] == '\0')
		krist[0] = NULL;
	while (k < counts)
	{
		while (s[i] == c)
			i++;
		krist[k] = ft_substr((char *)s, i, sc(&((char *)s)[i], c));
		if (!krist[k])
			return (NULL);
		i = i + sc(&((char *)s)[i], c);
		k++;
	}
	krist[k] = NULL;
	return (krist);
}
