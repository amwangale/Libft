/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:42:28 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 17:09:44 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The function ft_strmap() applies the function f to each character of the
** string given as an argument by giving its index as the first argument to
** create a "fresh" new string (with malloc(3)) resulting from the successive
** applications of f.
*/

#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*map;

	i = 0;
	if (s == 0)
		return (NULL);
	len = ft_strlen(s);
	map = malloc(sizeof(char) * (len + 1));
	if (map == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
