/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:03:38 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/04 12:03:41 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_print_params(int size, char *arg[]);

void	ft_print_params(int size, char *arg[])
{
	int	count;
	int	count_a;

	count = 1;
	while (count < size)
	{
		count_a = 0;
		while (arg[count][count_a] != '\0')
		{
			ft_putchar(arg[count][count_a]);
			count_a++;
		}
		count++;
		ft_putchar('\n');
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while ((s1[count] == s2[count])
		&& (s1[count] != '\0') && (s2[count] != '\0'))
	{
		count++;
	}
	return (s1[count] - s2[count]);
}

int	main(int argc, char *argv[])
{
	int		count;
	int		count_a;
	char	*temp;

	count = 1;
	while (count < argc)
	{
		count_a = 1;
		while (count_a < argc)
		{
			if (ft_strcmp(argv[count], argv[count_a]) < 0)
			{
				temp = argv[count];
				argv[count] = argv[count_a];
				argv[count_a] = temp;
			}
			count_a++;
		}
		count++;
	}
	ft_print_params(argc, argv);
	return (0);
}
