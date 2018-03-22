/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 03:15:26 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/08 20:30:29 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** lower case to upper case letter conversion
*/
#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
