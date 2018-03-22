/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 21:12:24 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 18:36:18 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_itoa() fuction allocates (with malloc(3)) and returns a "fresh"
** string ending with '\0' representing the integer n given as argument.
** Negative numbers must be supported. If the allocation fails, the
** function returns NULL
*/

#include "libft.h"

static	size_t		ft_length(int n)
{
	size_t	a;

	a = 1;
	while (n /= 10)
		a++;
	return (a);
}

char				*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	sign;

	len = ft_length(n);
	sign = n;
	if (n < 0)
	{
		sign = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = sign % 10 + 48;
	while (sign /= 10)
		str[--len] = sign % 10 + 48;
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
