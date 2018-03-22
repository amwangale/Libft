/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 21:55:28 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/20 21:59:00 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_lstiter() function iterates through a list and applies the function
** f to each link in the list.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
