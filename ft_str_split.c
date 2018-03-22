/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 18:50:21 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 18:50:39 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_str_split(const char *str, char seps)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str = ft_find_next(str, seps, 1);
		if (*str != '\0')
		{
			i++;
			str = ft_find_next(str, seps, 0);
		}
	}
	return (i);
}
