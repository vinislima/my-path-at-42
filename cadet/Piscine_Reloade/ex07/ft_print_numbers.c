/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:43:50 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/01 19:43:55 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void);
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	numbers;

	numbers = '0';
	while (numbers <= '9')
	{
		ft_putchar(numbers);
		numbers++;
	}
}
