/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:55:24 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/20 23:31:30 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strsub() function allocates with malloc(3) and returns a "fresh"
** substring from string given as an argument. The substring begins at index
** start and is of size len. If start and len aren't referring to a valid
** substring, the behavior is undefined. If the allocation fails, the function
** returns NULL.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		i;

	if (s == 0)
		return (NULL);
	p = malloc(sizeof(char) * (len + 1));
	if (p == 0)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && len)
	{
		p[i] = s[start];
		start++;
		i++;
		len--;
	}
	p[i] = '\0';
	return (p);
}
