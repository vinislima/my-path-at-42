/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:50:07 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/02 17:50:12 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int					count;
	int					max_int;
	unsigned long long	factorial;

	count = 2;
	factorial = 1;
	max_int = 2147483647;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (count <= nb)
	{
		factorial = factorial * count;
		count++;
	}
	if (factorial > 2147483647)
		return (0);
	else
		return (factorial);
}
