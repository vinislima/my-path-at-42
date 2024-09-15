/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:58:20 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/18 19:44:04 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	letras;

	letras = 'a';
	while (letras <= 'z')
	{
		write (1, &letras, 1);
		letras = letras + 1;
	}
}
