/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 16:35:46 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 16:17:28 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strlcat() appends string src to the end of dst.  It will append at most
** maxlen - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
** maxlen is 0 or the original dst string was longer than maxlen. maxlen
** should be the size of the destination string buffer dst plus the space
** for the nul-terminator. Returns the total length of the string it tried
** to create.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	end;

	i = 0;
	while (dst[i] && i < size)
		i++;
	end = i;
	if (size == 0)
		return (size + ft_strlen(src));
	while (src[i - end] && i < size - 1)
	{
		dst[i] = src[i - end];
		i++;
	}
	if (end < size)
		dst[i] = '\0';
	return (end + ft_strlen(src));
}
