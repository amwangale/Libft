/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 19:10:07 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 18:53:48 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strsplit() function allocates with malloc(3)
** and returns an array of fresh strings (all ending with '\0'
** including the array itself) obtained by splitting s using
** the character c as a delimiter. If the allocation fails,
** the function returns NULL.
*/

#include "libft.h"

char			**ft_strsplit(char const *str, char c)
{
	char		**ret;
	int			i;
	const char	*next;

	if (str == NULL)
		return (NULL);
	ret = (char**)malloc(sizeof(char*) * (ft_str_split(str, c) + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		str = ft_find_next(str, c, 1);
		if (*str != '\0')
		{
			next = ft_find_next(str, c, 0);
			ret[i] = ft_strsub(str, 0, next - str);
			if (ret[i] == NULL)
				return (ft_table_delete(ret, i));
			i++;
			str = next;
		}
	}
	ret[i] = 0;
	return (ret);
}
