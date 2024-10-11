/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:59:11 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/21 16:01:42 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// essa função recebe um ponteiro
// para o início de uma string
// e retornará o comprimento dela
int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;
	// novamente usaremos um laço de repetição
	// utilizando um contador para percorrer
	// a string e conseguir saber seu comprimento
	i = 0;
	// enquanto o elemento acessado na string
	// não for igual a nulo, permanecemos dentro
	// do laço e o contador é incrementado
	while (str[i] != '\0')
	{
		i++;
	}
	// após a condição ser atendida, saímos do laço
	// e retornamos o valor do contador, que neste caso
	// será o comprimento da string
	return (i);
}

// início da main
#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	// como o retorno da função é um inteiro
	// declaramos uma variável desse tipo
	// para receber o valor
	int i;
	// na atribuição colocamos a função
	// que retornará o valor
	i = ft_strlen("teste");
	// iremos imprimir o valor recebido
	printf("%d",i);
	return(0);
}
