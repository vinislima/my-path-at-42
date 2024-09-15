/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_line_column.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thferrei <thferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:11:50 by thferrei          #+#    #+#             */
/*   Updated: 2024/08/25 16:59:36 by thferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Set zeros in a four-size list of integers
void	set_zeros_col(int *vec)
{
	vec[0] = 0;
	vec[1] = 0;
	vec[2] = 0;
	vec[3] = 0;
	vec[4] = 0;
}

// Find a position of the zero on a type: 0=line, 1=column
int	find_zero_position_col(int *tab, int ind)
{
	int	pos;

	pos = 0;
	while (tab[ind + pos * 4] != 0)
		pos++;
	return (pos);
}

// Auxiliar function of last_elem_column
void	put_last_elem_column(int *tab, int col)
{
	int	numbers[5];
	int	count;
	int	key;
	int	pos;

	pos = find_zero_position_col(tab, col);
	set_zeros_col(numbers);
	count = 0;
	while (count < 4)
	{
		key = tab[count * 4 + col];
		numbers[key] = key;
		count++;
	}
	count = 1;
	while (count < 5)
	{
		if (numbers[count] == 0)
			tab[pos * 4 + col] = count;
		count++;
	}
}

// Insert a last element of a column
void	last_elem_column(int *tab)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		count = 0;
		while (j < 4)
		{
			if (tab[i + 4 * j] == 0)
				count++;
			j++;
		}
		if (count == 1)
			put_last_elem_column(tab, i);
		i++;
	}
}
