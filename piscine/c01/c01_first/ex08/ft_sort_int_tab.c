/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:12:28 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/22 18:08:51 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	count_a;
	int	count_b;
	int test;
	int change;

	test = 1;
	count_a = 0;
	while(count_a < size)
	{
		test = 0;
		count_b = 0;
		while(count_b < size - count_a - 1)
		{
			if(tab[count_b] > tab[count_b + 1])
			{
				change = tab[count_b];
				tab[count_b] = tab[count_b + 1];
				tab[count_b + 1] = change;
				test = 0;
			}
			if(test == 0)
			break;
		}
		count_b++;
	}
	count_a++;
}

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int size = 6;
	int index = 0;
	int array[] = {212, 13, 40, 5, 19, 0};
	while(index < size)
	{
		printf("%i,",array[index]);
		index++;
	}
	printf("\n");
	ft_sort_int_tab(array, size);
	index = 0;
	while(index < size)
	{
		printf("%i,",array[index]);
		index++;
	}
}
