/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_top_and_bottom.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thferrei <thferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:47:09 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/25 18:51:17 by thferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_top(int *tab, int i)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		tab[4 * j + i] = j + 1;
		j++;
	}
}

void	set_botton(int *tab, int i)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		tab[12 - 4 * j + i] = j + 1;
		j++;
	}
}

void	set_top_and_bottom(int	*tab, int	*vec)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (vec[0 + i] == 4)
		{
			set_top(tab, i);
		}
		if (vec[4 + i] == 4)
		{
			set_botton(tab, i);
		}
		i++;
	}
}
