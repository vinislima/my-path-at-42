/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:44:55 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/20 19:52:39 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);
// aqui o objetivo é manipular a informação no ponteiro
// de tal forma que com a função, os ponteiros recebam
// os valores e com neles mesmo façamos a alteração de memória
// armazenando os resultados
void	ft_ultimate_div_mod(int *a, int *b)
{
	// declaramos duas variáveis para momentaneamente
	// armazene os valores dos cálculos
	int	div;
	int	mod;
	// div recebe o valor da divisão dos valores entre a e b
	div = *a / *b;
	// mod recebe o valor do módulo dos valores entre a e b
	mod = *a % *b;
	// aqui ponteiro recebe o valor de div
	*a = div;
	// aqui o ponteiro recebe o valor de mod
	*b = mod;
}

// início da main
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main()
{
	// declaramos e atribuímos valores as variáveis
	int a = 40;
	int b = 10;
	// imprimimos para verificar os valores armazenados
	printf("a = %i, b = %i\n", a, b);
	// chamamos a função e passamos os endereços de memórias das variáveis
	ft_ultimate_div_mod(&a, &b);
	// imprimimos novamente os valores das variáveis, que agora contém
	// os valores dos cálculos realizados na função
	printf("a = %i, b = %i", a, b);
	return(0);
}