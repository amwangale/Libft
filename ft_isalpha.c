/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 02:58:13 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 17:11:44 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**alphabetic character test, tests if isupper or islower is true
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}
