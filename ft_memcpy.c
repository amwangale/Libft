/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 03:30:51 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 18:23:25 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_memcpy() function copies n bytes from memory area src to memory area
** dst.  If dst and src overlap, behavior is undefined. Returns the original
** value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned char	*srctemp;
	unsigned int	i;

	temp = (unsigned char *)dst;
	srctemp = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = srctemp[i];
		i++;
	}
	return (dst);
}
