/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thferrei <thferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:16:36 by thferrei          #+#    #+#             */
/*   Updated: 2024/08/25 19:03:54 by thferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		input_verify(int n_param, char *str);
int		corner_verification(int *vec);
void	set_numbers(int *tab, int *vec);
int		ft_check_corner(int *inp, int idx1, int idx2);

// cast char input to int
int	*char_to_int(char *str, int *res)
{
	int	pos;

	pos = 0;
	while (pos < 16)
	{
		res[pos] = str[pos * 2] - 48;
		pos++;
	}
	return (res);
}

// Inicialialize the grid
void	inicialize(int *tab)
{
	int	pos;

	pos = 0;
	while (pos < 16)
	{
		tab[pos] = 0;
		pos++;
	}
}

// Print the grid
void	printer(int *tab)
{
	int	count[3];

	count[0] = 0;
	count[2] = 0;
	while (count[0] < 4)
	{
		count[1] = 0;
		while (count[1] < 4)
		{
			tab[count[2]] += 48;
			write(1, &tab[count[2]], 1);
			if (count[1] < 3)
				write(1, " ", 1);
			count[1]++;
			count[2]++;
		}
		write(1, "\n", 1);
		count[0]++;
	}
}

// Set error message
void	print_error(void)
{
	write (1, "Error\n", 6);
}

int	main(int argc, char *argv[])
{
	int	tab[16];
	int	vec[16];

	if (!input_verify(argc, argv[1]))
	{	
		print_error();
		return (0);
	}
	inicialize(tab);
	char_to_int(argv[1], vec);
	if (!corner_verification(vec))
	{
		print_error();
		return (0);
	}
	set_numbers(tab, vec);
	printer(tab);
	return (0);
}
