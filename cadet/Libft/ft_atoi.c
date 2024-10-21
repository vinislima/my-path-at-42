/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 09:45:52 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/21 09:45:56 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr);

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	count;

	result = 0;
	count = 0;
	sign = 1;
	while (nptr[count] == ' '
		|| nptr[count] == '\t' || nptr[count] == '\n')
	{
		count++;
	}
	if (nptr[count] == '-')
	{
		sign = -1;
		count++;
	}
	else if (nptr[count] == '+')
		count++;
	while (nptr[count] >= '0' && nptr[count] <= '9')
	{
		result = result * 10 + (nptr[count] - '0');
		count++;
	}
	return (sign * result);
}
