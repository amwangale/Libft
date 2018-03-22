/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 03:44:48 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 17:46:27 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strstr() function locates the first occurrence of the null-terminated
** string needle in the null-terminated string haystack.
** If needle is an empty string, haystack is returned.
** If needle occurs nowhere in haystack, NULL is returned.
** otherwise a pointer to the first character of the
** first occurence of needle is returned
*/

#include "libft.h"

char	*ft_strstr(char *big, const char *little)
{
	int	i;
	int j;
	int	string;

	i = 0;
	j = 0;
	string = 0;
	while (little[string] != '\0')
		string++;
	if (!string)
		return ((char *)big);
	while (big[i])
	{
		while (little[j] == big[i + j])
		{
			if (j == string - 1)
				return ((char *)big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
