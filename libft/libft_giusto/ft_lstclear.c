/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:37:24 by llombard          #+#    #+#             */
/*   Updated: 2022/10/14 16:39:55 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	**p;

	p = lst;
	if (p != 0 && *p != 0)
	{
		ft_lstclear(&(*p)-> next, del);
		ft_lstdelone(*p, del);
		*p = 0;
	}
}
