/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 02:59:04 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 15:38:09 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strdup() function allocates sufficient memory for a copy of the string
** s1, does the copy, and returns a pointer to it.  The pointer may subsequently
** be used as an argument to the function free(3). If insufficient memory is
** available, NULL is returned and errno is set to ENOMEM.
*/

#include "libft.h"

char	*ft_strdup(char *s1)
{
	char *s2;

	s2 = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (s2)
	{
		return (ft_strcpy(s2, (char *)s1));
	}
	return (0);
}
