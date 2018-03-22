/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 02:24:39 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/20 23:06:48 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memccpy() copies bytes from string src to string dst.  If the character
** c (as converted to an unsigned char) occurs in the string src, the copy
** stops and a pointer to the byte after the copy of c in the string dst
** is returned.  Otherwise, n bytes are copied, and a NULL pointer is returned.
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *temp;
	unsigned char *srctemp;

	temp = (unsigned char *)dst;
	srctemp = (unsigned char *)src;
	while (n > 0)
	{
		if (*srctemp == (unsigned char)c)
		{
			*temp++ = *srctemp++;
			return (temp);
		}
		*temp++ = *srctemp++;
		n--;
	}
	return (NULL);
}
