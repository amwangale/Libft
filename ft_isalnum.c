/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 03:04:00 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 18:26:21 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tests for any character for which isalpha or isdigit is true
*/
#include "libft.h"

int		ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
