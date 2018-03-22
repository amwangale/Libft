/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:57:01 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 16:30:59 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strjoin() function allocates (with malloc(3)) and returns a "fresh"
** string that is the concatenation of s1 and s2, ending with '\0'. If the
** allocation fails, the function returns NULL.
*/

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char *str;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	if (!(str = (char *)malloc(ft_strlen((char *)s1) +
					ft_strlen((char *)s2) + 1)))
		return (NULL);
	str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	return (str);
}
