/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwangal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:35:02 by amwangal          #+#    #+#             */
/*   Updated: 2018/03/21 16:59:30 by amwangal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_atoi() converts the initial portion of the string pointed to by str
** to int representation.
*/

#include "libft.h"

int		ft_atoi(char *str)
{
	int result;
	int neg;
	int i;

	result = 0;
	neg = 1;
	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (str[0] == '-')
		neg *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result *= neg);
}
