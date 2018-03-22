/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 17:50:43 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 17:17:36 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates with malloc(3) and returns a fresh memory area. The memory
** allocated is initialized to 0. If the allocation fails, the function
** returns NULL.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*memory;

	memory = malloc(size);
	if (memory == NULL)
		return (NULL);
	else
		ft_bzero(memory, size);
	return (memory);
}
