/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 03:11:51 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/20 03:38:09 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strncat() function appends a copy of the null-terminated string s2
** to the end of the null-terminated string s1. The ft_strncat() function
** appends not more than n characters from s2, and then adds a terminating
** '\0'.
*/

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	z;

	z = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[z] != '\0' && n != 0)
	{
		s1[i] = s2[z];
		i++;
		z++;
		n--;
	}
	s1[i] = '\0';
	return (s1);
}
