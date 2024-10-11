/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:18:59 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/18 19:44:30 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	// seguimos a mesma idéia, mas aqui para percorrer os digitos
	char	numeros;

	numeros = '0';
	while (numeros <= '9')
	{
		write (1, &numeros, 1);
		numeros = numeros + 1;
	}
}

// void	ft_print_numbers(void);

// int main()
// {
// 	ft_print_numbers();
// 	return (0);
// }
