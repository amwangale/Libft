/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 19:09:57 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 17:05:42 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strtrim() function allocates with malloc(3) and returns a copy of
** the string given as argument without whitespaces at the beginning or at
** the end of the string. ' ', '\n' and '\t' are considered whitespace
** characters. If s has no whitespaces at the beginning or the end, the
** function returns a copy of s. If the allocation fails the function returns
** NULL.
*/

#include "libft.h"

char	*ft_strtrim(char *s)
{
	char *end;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	end = s + ft_strlen(s) - 1;
	while (*end == ' ' || *end == '\t' || *end == '\n')
		end--;
	return (ft_strsub(s, 0, end - s + 1));
}
