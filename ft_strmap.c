/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 17:25:53 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 18:31:25 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The function ft_strmap() applies the function f to each character of the
** string passed as an argument to create a "fresh" new string (with malloc(3))
** resulting from the successive applications of f.
*/

#include "libft.h"

char	*ft_strmap(char *s, char (*f)(char))
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
		map[i] = f(s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
