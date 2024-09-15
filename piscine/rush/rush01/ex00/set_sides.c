/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_sides.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thferrei <thferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:13:28 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/25 18:17:44 by thferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_sides_left(int i, int *tab)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		tab[3 - j + 4 * i] = j + 1;
		j++;
	}
}

void	set_sides_right(int i, int *tab)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		tab[j + 4 * i] = j + 1;
		j++;
	}
}

void	set_sides(int *tab, int	*vec)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (vec[12 + i] == 4)
		{
			set_sides_left(i, tab);
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (vec[8 + i] == 4)
		{
			set_sides_right(i, tab);
		}
		i++;
	}
}
