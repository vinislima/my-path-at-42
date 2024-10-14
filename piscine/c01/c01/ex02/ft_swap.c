/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:58:34 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/20 16:53:35 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// aqui vamos ter contato com o conceito de manipulação
// de ponteiros, onde iremos trocar o conteúdo deles
void	ft_swap(int *a, int *b);
// a função recebe dois ponteiros do tipo inteiro
void	ft_swap(int *a, int *b)
{
	// para a manipulação iremos declarar uma variável
	// que armazenará momentaneamente o valor de um deles
	int	change;
	// aqui ela armazena o valor do ponteiro a
	change = *a;
	// desta forma podemos armazenar no ponteiro a
	// o valor do ponteiro b
	*a = *b;
	// e finalmente no ponteiro b, podemos armazenar
	// em b o valor de a, que estava armanezado na
	// variável change
	*b = change;
}

// // iniciamos o main aqui
// #include <unistd.h>
// #include <stdio.h>

// void	ft_swap(int *a, int *b);

// int	main()
// {
// 	// declaramos e atribuimos valores
// 	// as variaveis 
// 	int a = 10;
// 	int b = 40;
// 	// testamos para verificar os valores
// 	// armazenados nas variáveis
// 	printf("a = %i, b = %i\n", a, b);
// 	// chamamos a função que ira realizar a troca
// 	// para isso passamos os endereços de mémoria
// 	ft_swap(&a, &b);
// 	// imprimindo novamente vemos que a troca ocorreu
// 	printf("a = %i, b = %i", a, b);
// 	return(0);
// }
