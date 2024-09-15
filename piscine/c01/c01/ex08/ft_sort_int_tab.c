/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:12:28 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/22 19:29:05 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	count_a;
	int	count_b;
	int	change;

	count_a = 0;
	while (count_a < size - 1)
	{
		count_b = 0;
		while (count_b < size - count_a - 1)
		{
			if (tab[count_b] > tab[count_b + 1])
			{
				change = tab[count_b];
				tab[count_b] = tab[count_b + 1];
				tab[count_b + 1] = change;
			}
			count_b++;
		}
		count_a++;
	}
}
