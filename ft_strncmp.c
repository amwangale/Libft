/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 03:48:21 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/20 16:31:47 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strncmp() function lexicographically compares the null-terminated
** strings s1 and s2. Returns an integer greater than, equal to, or less than
** 0, according as the string s1 is greater than, equal to, or less than the
** string s2.  Compares not more than n characters. The comparison is done
** using unsigned characters, so that '\200' is greater than '\0'.
*/

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && n > 1)
	{
		i++;
		n--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
