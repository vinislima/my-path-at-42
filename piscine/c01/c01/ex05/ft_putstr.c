/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:50:07 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/21 11:37:27 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// aqui vamos imprimir strings
// o ponteiro recebido aponta para o início da string
void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	// declaramos uma variável que servirá de contador
	// no laço de repetição
	int	i;
	// atribuímos o valor inicial a variável
	i = 0;
	// esse laço se repetirá enquanto o elemento
	// da string for diferente de nulo
	// o contador irá proporcionar que seja possível
	// percorrer a string
	while (str[i] != '\0')
	{
		// utilizando a função write, será impresso
		// cada elemento da string, até que seja atingido
		// o elemento nulo
		write(1, &str[i], 1);
		i++;
	}
}

// // início da main
// void	ft_putstr(char *str);

// int main(void)
// {
// 	// chamamos a função e passamos a string
// 	ft_putstr("teste");
// 	return(0);
// }