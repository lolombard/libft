/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:59:23 by llombard          #+#    #+#             */
/*   Updated: 2022/10/14 16:33:01 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	int		s;

	p = lst;
	s = 0;
	if (lst != 0)
	{
		while (p != 0)
		{
			p = p -> next;
			s++;
		}
	}
	return (s);
}
