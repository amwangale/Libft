/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 01:50:45 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 17:07:45 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strequ() function does a lexicographical comparison between s1
** and s2. If the 2 strings are identical the function returns 1, or 0
** otherwise
*/

#include "libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	if (s1 && s2)
	{
		if (ft_strcmp(s1, s2) == 0)
		{
			return (1);
		}
	}
	return (0);
}
