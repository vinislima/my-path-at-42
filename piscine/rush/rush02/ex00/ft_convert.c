/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:30:49 by pabperei          #+#    #+#             */
/*   Updated: 2024/09/01 20:30:52 by pabperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_convert(char *str)
{
	int	result;
	int	signal;

	result = 0;
	signal = 1;
	if (*str == '-' || *str == '+')
	{
		signal = -1;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
		}
		else
		{
			write(1, "error\n", 6);
			return (-1);
		}
		str++;
	}
	return (result * signal);
}
