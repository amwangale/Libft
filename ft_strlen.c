/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 22:57:10 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 18:46:55 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**find length of a string; strlen(const char*s)
*/
#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
