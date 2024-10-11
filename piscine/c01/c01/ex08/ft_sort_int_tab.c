/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:12:28 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/22 19:29:05 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// nessa função vamos ser apresentados ao conceito
// de métodos de ordenação, neste caso específico
// o bubble sort.
// aqui a função recebe dois inteiros, um ponteiro para
// o início da array e um com a quantidade de elementos
void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	// declaramos três variáveis, duas de index
	// e outra para comportar os elementos durante
	// a mudança de posição
	int	count_a;
	int	count_b;
	int	change;
	// o laço de repitação será inicado no primeiro elemento
	// do array e seguira sendo executado enquanto o contador
	// for menor que o tamanho, novamente subtraindo um para
	// evitar ultrapassar o tamanho do array
	// dessa maneira que foi implementado, iremos repetir a
	// verificação de valores, em todos os elementos da array
	count_a = 0;
	while (count_a < size - 1)
	{
		count_b = 0;
		// esse laço irá se repetir enquanto o segundo contador
		// for menor que a quantidade de elementos do array,
		// subtraído da quantidade de elementos já interados,
		// porque a cada interação o maior número passa a ocupar
		// a última posição, então não devemos mais acessa-lo.
		// excluindo novamente o ultimo elemento para
		// não ultrapassar o tamanho do array
		while (count_b < size - count_a - 1)
		{
			// aqui é testado se o elemento é maior que o próximo
			// em caso de ser verdadeiro, entramos na condição
			if (tab[count_b] > tab[count_b + 1])
			{
				// entrando na condição vamos realizar
				//a troca de posições entre eles
				change = tab[count_b];
				tab[count_b] = tab[count_b + 1];
				tab[count_b + 1] = change;
			}
			count_b++;
		}
		count_a++;
		// iremos realizar esse teste até o final passando
		// pelo array em uma quantidade de vezes igual ao seu tamanho
	}
}

// início da main
#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	// declaramos duas variáveis, uma para a quantidade de elementos
	// outra para o index do array
	int size = 6;
	int index = 0;
		// aqui declaramos e atribuímos elementos para o array
	int array[] = {212, 13, 40, 5, 19, 0};
	// o laço de repetição percorrerá enquanto o index
	// for menor que a quantidade de elementos dele
	// realizamos a primeira impressão para verificar a ordem
	while(index < size)
	{
		printf("%i,",array[index]);
		index++;
	}
	printf("\n");
	// chamamos a função e passamos o array e o a quantidade elementos
	ft_sort_int_tab(array, size);
	// fazemos novamente um laço para passar pelo array e confirmar
	// que a inversão ocorreu
	index = 0;
	while(index < size)
	{
		printf("%i,",array[index]);
		index++;
	}
}
