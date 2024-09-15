/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thferrei <thferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:42:14 by thferrei          #+#    #+#             */
/*   Updated: 2024/08/25 19:03:18 by thferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	last_elem_line(int *tab);
void	last_elem_column(int *tab);
void	set_four_rule(int *tab, int *vec);
void	set_one_rule(int *tab, int *vec);
void	three_two_rule(int *tab, int *vec);
int		ft_antisym(int *inp);
int		ft_check_corner(int *inp, int idx1, int idx2);
int		verify_max_numbers(int *input);

// Set numbers
void	set_numbers(int *tab, int *vec)
{
	int	iter;

	set_four_rule(tab, vec);
	set_one_rule(tab, vec);
	three_two_rule(tab, vec);
	iter = 0;
	while (iter < 4)
	{
		last_elem_line(tab);
		last_elem_column(tab);
		iter++;
	}
}

int	corner_verification(int *vec)
{
	if (!ft_antisym(vec) || !verify_max_numbers(vec))
		return (0);
	if (!ft_check_corner(vec, 0, 8) || !ft_check_corner(vec, 3, 12))
		return (0);
	if (!ft_check_corner(vec, 11, 4) || !ft_check_corner(vec, 15, 7))
		return (0);
	return (1);
}
