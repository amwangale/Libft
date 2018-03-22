/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 21:51:46 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 17:39:01 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” link. The variables
** content and content_size of the new link are initialized by copy of the
** parameters of the function. If the parameter content is nul, the variable
** content is initialized to NULL and the variable content_size is initialized
** to 0 even if the parameter content_size isn’t. The variable next is
** initialized to NULL. If the allocation fails, the function returns NULL.
*/

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *link;

	link = malloc(sizeof(t_list));
	if (link == 0)
		return (NULL);
	if (content == 0)
	{
		link->content = NULL;
		content_size = 0;
		link->next = NULL;
		return (link);
	}
	link->content = malloc(content_size);
	link->content_size = content_size;
	ft_memcpy(link->content, content, content_size);
	link->next = NULL;
	return (link);
}
