/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_rule.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thferrei <thferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:05:39 by thferrei          #+#    #+#             */
/*   Updated: 2024/08/25 18:50:33 by thferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_top_and_bottom(int *tab, int *vec);
void	set_sides(int	*tab, int	*vec);

// Set one-to-four sequences in front of fours
void	set_four_rule(int	*tab, int	*vec)
{
	int	i;

	set_top_and_bottom(tab, vec);
	i = 0;
	set_sides(tab, vec);
}

// Set fours in front of ones
void	set_one_rule(int *tab, int *vec)
{
	int	count;

	count = 0;
	while (count < 4)
	{
		if (vec[count] == 1)
			tab[count] = 4;
		count++;
	}
	while (count < 8)
	{
		if (vec[count] == 1)
			tab[count + 8] = 4;
		count++;
	}
	if (vec[9] == 1)
		tab[4] = 4;
	if (vec[10] == 1)
		tab[8] = 4;
	if (vec[13] == 1)
		tab[7] = 4;
	if (vec[14] == 1)
		tab[11] = 4;
}

// 3-2 rule
void	three_two_rule_aux(int *tab, int *vec)
{
	if (vec[8] == 3 && vec[12] == 2)
		tab[2] = 4;
	if (vec[9] == 3 && vec[13] == 2)
		tab[6] = 4;
	if (vec[10] == 3 && vec[14] == 2)
		tab[10] = 4;
	if (vec[11] == 3 && vec[15] == 2)
		tab[14] = 4;
	if (vec[12] == 3 && vec[8] == 2)
		tab[1] = 4;
	if (vec[13] == 3 && vec[9] == 2)
		tab[5] = 4;
	if (vec[14] == 3 && vec[10] == 2)
		tab[9] = 4;
	if (vec[15] == 3 && vec[11] == 2)
		tab[13] = 4;
}

void	three_two_rule(int *tab, int *vec)
{
	int	count;

	count = 0;
	while (count < 4)
	{
		if (vec[count] == 3 && vec[count + 4] == 2)
			tab[count + 8] = 4;
		if (vec[count] == 2 && vec[count + 4] == 3)
				tab[count + 4] = 4;
		count++;
	}
	three_two_rule_aux(tab, vec);
}
