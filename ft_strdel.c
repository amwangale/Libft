/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 00:51:01 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 17:41:29 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strdel() function takes as a parameter the address of a string
** that needs to be freed with free(3), then sets its pointer to NULL.
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}
