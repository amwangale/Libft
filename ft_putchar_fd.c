/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 01:47:35 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 17:06:28 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**outputs the char c to the file descriptor fd
*/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
