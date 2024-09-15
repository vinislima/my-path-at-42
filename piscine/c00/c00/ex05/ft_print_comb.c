/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 16:50:10 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/26 16:57:42 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	unit;

	hundred = '0';
	while (hundred <= '7')
	{
		ten = hundred + 1;
		while (ten <= '8')
		{
			unit = ten + 1;
			while (unit <= '9')
			{
				write(1, &hundred, 1);
				write(1, &ten, 1);
				write(1, &unit, 1);
				if (! (hundred == '7' && ten == '8' && unit == '9'))
					write(1, ", ", 2);
				unit++;
			}
			ten++;
		}
		hundred++;
	}
}
