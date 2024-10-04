/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:24:21 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/01 19:24:28 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void);
void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	letters;

	letters = 'a';
	while (letters <= 'z')
	{
		ft_putchar(letters);
		letters++;
	}
}
