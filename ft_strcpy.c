/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 23:10:56 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 18:30:09 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**copy strings; #include <string.h>; strcpy(char *dest, const char * src)
*/
#include "libft.h"

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
