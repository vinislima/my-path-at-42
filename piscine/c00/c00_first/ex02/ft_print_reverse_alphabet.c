/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:03:53 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/18 19:44:18 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letras;

	letras = 'z';
	while (letras >= 'a')
	{
		write (1, &letras, 1);
		letras = letras - 1;
	}
}
