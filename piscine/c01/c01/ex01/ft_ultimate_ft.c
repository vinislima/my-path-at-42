/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:05:09 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/20 16:52:15 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// nesta função somos aprentados para o conceito
// de níveis de ponteiros, onde um ponteiro, aponta
// para outro ponteiro. Neste caso, como exemplo
// trabalharemos com um ponteiro de nove níveis
void	ft_ultimate_ft(int *********nbr);

void	ft_ultimate_ft(int *********nbr)
{
	// esse ponteiro recebe o valor de quanrenta e dois
	*********nbr = 42;
}

// // inicio da main
// #include <stdio.h>
// #include <unistd.h>

// void ft_ultimate_ft(int *********nbr);

// int main()
// {
// 	// como precisamos de um ponteiro de nove níveis
// 	// criamos um variável sem atribuir valor
// 	// e vamos criando ponteiro e passamos o endeço
// 	// de mémoria dessa variável para um ponteiro
// 	// e vamos nessa sequência até alcançar nove níveis
// 	int number;
// 	int *ptr1 = &number;
// 	int **ptr2 = &ptr1;
// 	int ***ptr3 = &ptr2;
// 	int ****ptr4 = &ptr3;
// 	int *****ptr5 = &ptr4;
// 	int ******ptr6 = &ptr5;
// 	int *******ptr7 = &ptr6;
// 	int ********ptr8 = &ptr7;
// 	int *********ptr9 = &ptr8;
// 	// testamos a impressão da variável antes de
// 	// chamar a função
// 	printf("%i\n",number);
// 	// chamamos a função e passamos o ultimo ponteiro
// 	ft_ultimate_ft(ptr9);
// 	// imprimimos a variável inicial novamente que
// 	// desta vez ira imprimir o conteúdo do ponteiro da função
// 	printf("%i",number);
// }