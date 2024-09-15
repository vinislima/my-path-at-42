/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_elem_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thferrei <thferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:09:49 by thferrei          #+#    #+#             */
/*   Updated: 2024/08/25 16:59:28 by thferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Set zeros in a four-size list of integers
void	set_zeros_line(int *vec)
{
	vec[0] = 0;
	vec[1] = 0;
	vec[2] = 0;
	vec[3] = 0;
	vec[4] = 0;
}

// Find a position of the zero on a type: 0=line, 1=column
int	find_zero_position_line(int *tab, int ind)
{
	int	pos;

	pos = 0;
	while (tab[ind * 4 + pos] != 0)
		pos++;
	return (pos);
}

// Auxiliar function of last_elem_line
void	put_last_elem_line(int *tab, int line)
{
	int	numbers[5];
	int	count;
	int	key;
	int	pos;

	pos = find_zero_position_line(tab, line);
	set_zeros_line(numbers);
	count = 0;
	while (count < 4)
	{
		key = tab[count + line * 4];
		numbers[key] = key;
		count++;
	}
	count = 1;
	while (count < 5)
	{
		if (numbers[count] == 0)
			tab[pos + line * 4] = count;
		count++;
	}
}

// Insert a last element of a line
void	last_elem_line(int *tab)
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
			if (tab[i * 4 + j] == 0)
				count++;
			j++;
		}
		if (count == 1)
			put_last_elem_line(tab, i);
		i++;
	}
}
