/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:46:19 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/21 17:59:22 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);
// aqui vamos testar como armazenar valores em ponteiros
// utilizando valores recebidos para realizar operações matemáticas
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	// o ponteiro div deve conter o resultado da divisão
	// entre os inteiros a e b
	*div = a / b;
	// o ponteiro mod recebe a operação de módulo entre a e b
	*mod = a % b;
}

// // inicio da main
// #include <stdio.h>

// void	ft_div_mod(int a, int b, int *div, int *mod);

// int	main()
// {
// 	// declaramos quatro variáveis
// 	// onde vamos atribuir valores a duas
// 	// e as outras duas iremos utilizar seus endereços
// 	// para receber os resultados das operações realizadas na função
// 	int a, b, div, mod;
// 	// atribuimos valore à a e b
// 	a = 20;
// 	b = 5;
// 	// passamos as variáveis e endereços para a função
// 	ft_div_mod(a, b, &div, &mod);
// 	// aqui imprimimos os valores armazenados nas variáveis
// 	// que antes não tinham valores atribuidos
// 	printf("div: %d, mod: %d", div, mod);
// 	return(0);
// }