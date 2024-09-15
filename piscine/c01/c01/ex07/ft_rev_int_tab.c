/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:12:49 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/22 10:57:43 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	change;
	int	count_first;
	int	count_end;

	count_first = 0;
	count_end = size - 1;
	while (count_first < count_end)
	{
		change = tab[count_first];
		tab[count_first] = tab[count_end];
		tab[count_end] = change;
		count_first++;
		count_end--;
	}
}
