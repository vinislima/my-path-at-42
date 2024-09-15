/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 08:42:53 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/27 10:47:14 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_change_first_duo(int first_duo);
void	ft_change_second_duo(int second_duo);

void	ft_change_first_duo(int first_duo)
{
	char	first_div;
	char	first_rest;

	first_div = first_duo / 10 + '0';
	first_rest = first_duo % 10 + '0';
	write(1, &first_div, 1);
	write(1, &first_rest, 1);
	write(1, " ", 1);
}

void	ft_change_second_duo(int second_duo)
{
	char	second_div;
	char	second_rest;

	second_div = second_duo / 10 + '0';
	second_rest = second_duo % 10 + '0';
	write(1, &second_div, 1);
	write(1, &second_rest, 1);
}

void	ft_print_comb2(void)
{
	int	first_duo;
	int	second_duo;

	first_duo = 0;
	while (first_duo <= 98)
	{
		second_duo = first_duo + 1;
		while (second_duo <= 99)
		{
			ft_change_first_duo(first_duo);
			ft_change_second_duo(second_duo);
			if (first_duo != 98 || second_duo != 99)
				write(1, ", ", 2);
			second_duo++;
		}
		first_duo++;
	}
}
