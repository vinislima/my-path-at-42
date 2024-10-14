/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 08:37:40 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/28 09:37:27 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a função verifica se na string todos os elementos são
// caracteres alfabéticos minúsculos
int	ft_str_is_lowercase(char *str);
int	ft_strlen(char *str);
// função para saber o tamanho da string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	// percorre os elementos da string até encontrar
	// o elemento nulo
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_lowercase(char *str)
{
	int	count_str;
	// se a string não contiver nenhum elemento, retorna um
	if (ft_strlen(str) <= 0)
		return (1);
	else
	{
		count_str = 0;
		// o laço ocorre enquanto não encontrar o nulo
		while (str[count_str] != '\0')
		{
			// verifica se o elemento está fora do intervalo de
			// caracteres alfabéticos minúsculos, se estiver retorna zero
			if (str[count_str] <= 96 || str[count_str] >= 123)
				return (0);
			count_str++;
		}
	}
	// caso passe por todos os elementos e todos os elementos sejam
	// minúsculos, retorna um
	return (1);
}
