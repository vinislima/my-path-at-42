/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:45:47 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/20 18:17:06 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// nessa lista temos o primeiro contato
// com ponteiros, onde armazenamos o referência
// de objetos, como variáveis
// neste caso um ponteiro do tipo inteiro
void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	// aqui estamos armanezando no ponteiro um valor
	*nbr = 42;
}

// // início da main
// #include <unistd.h>
// #include <stdio.h>

// void	ft_ft(int *nbr);

// int	main(void)
// {
// 	// declaramos uma variável do tipo inteiro
// 	int	a;
// 	// aqui atribuimos um valor à ela
// 	a = 20;
// 	// usamos um printf, para mostrar o valor inicialmente
// 	// armazenado nela, neste caso vinte
// 	printf("Antes: %d\n", a);
// 	// chamando a função, passamos o endereço de memória
// 	// da variável, que ira apontar para o valor armazenado nela
// 	ft_ft(&a);
// 	// desta forma ao imprimir novamente a várivel teremos do valor
// 	// do ponteiro da função, quarenta e dois
// 	printf("Depois: %d", a);
// 	return (0);
// }