/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 03:10:28 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 16:56:30 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**tests for any printing character including space
*/
#include "libft.h"

int		ft_isprint(int c)
{
	return (32 <= c && c < 127);
}
