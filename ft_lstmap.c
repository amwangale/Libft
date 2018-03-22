/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 22:05:36 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/20 22:11:19 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The function ft_lstmap() iterates a list lst and applies the function f to
** each link to create a “fresh” list (using malloc(3)) resulting from the
** successive applications of f. If the allocation fails, the function returns
** NULL.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *p;
	t_list *p2;
	t_list *begin;

	if (lst == 0)
		return (NULL);
	begin = lst;
	new = f(begin);
	p = new;
	while (begin->next)
	{
		begin = begin->next;
		p2 = f(begin);
		p->next = p2;
		p = p->next;
	}
	p->next = NULL;
	return (new);
}
