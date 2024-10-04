/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:01:07 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/03 17:01:10 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	count;
	int	count_a;

	count = 1;
	while (count < argc)
	{
		count_a = 0;
		while (argv[count][count_a] != '\0')
		{
			ft_putchar(argv[count][count_a]);
			count_a++;
		}
		count++;
		ft_putchar('\n');
	}
}
