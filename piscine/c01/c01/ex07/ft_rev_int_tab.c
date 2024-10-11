/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:12:49 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/22 10:57:43 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// nessa função iremos receber um ponteiro para
// que aponta pra início de array de inteiros
// e outro com a quantidade de elementos no array,
// e será realizada a inversão dos elementos dela
void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	// declaramos três variáveis, uma para realizar o
	// armazenamento temporário da troca, outras duas
	// que serão contadores
	int	change;
	int	count_first;
	int	count_end;
	// atribuimos o valor de zero para o primeiro
	// contador, para interagirmos com o primeiro
	// elemento do array
	count_first = 0;
	// o segundo contador será utilizado para interagir
	// com o último elemento do array, será usado o menos
	// um pois no array porque a contagem se inícia em zero
	// e desta forma não iremos ultrapassar o limite do array
	count_end = size - 1;
	// enquanto primeiro contador for menor do que
	// o contador do final da string ficaremos dentro do
	// laço de repetição
	while (count_first < count_end)
	{
		// atribuimos a variável de armazenamento de troca o valor
		// do primeiro item do array
		change = tab[count_first];
		// agora podemos atribuir a primeira posição o valor da última posição
		tab[count_first] = tab[count_end];
		// e o último elemento recebe o valor do primeiro que estava armazenado
		// na variável de troca
		tab[count_end] = change;
		// incrementando a variável do início para acessar o elemento seguinte
		count_first++;
		// decrementamos a variável do fim para acessar o elemento antterior
		count_end--;
	}
	// ficaremos nesse looping até a condição ser falsa, nesse momento as variáveis
	// já estarão trocadas e ambas estarão no meio do array
}

// início da main
#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{	
	// declaramos duas variáveis, uma para a quantidade de elementos
	// outra para o index do array
	int size = 5;
	int index = 0;
	// aqui declaramos e atribuímos elementos para o array
	int array[] = {1, 2, 3, 4, 5};
	// o laço de repetição percorrerá enquanto o index
	// for menor que a quantidade de elementos dele
	// realizamos a primeira impressão para verificar a ordem
	while(index < size)
	{
		printf("%i,",array[index]);
		index++;
	}
	// chamamos a função e passamos o array e o a quantidade elementos
	ft_rev_int_tab(array, size);
	// fazemos novamente um laço para passar pelo array e confirmar
	// que a inversão ocorreu
	index = 0;
	while(index < size)
	{
		printf("%i,",array[index]);
		index++;
	}
}
