/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:53:20 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/30 22:42:55 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_get_num_length(int n);
char		*ft_itoa(int n);

static int	ft_get_num_length(int n)
{
	int		length;
	long	num;

	num = n;
	length = 0;
	if (num <= 0)
		length = 1;
	while (num != 0)
	{
		num = num / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		length;
	long	num;
	char	*str;

	length = ft_get_num_length(n);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[length] = '\0';
	num = n;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (length > 0)
	{
		length--;
		if (str[length] != '-')
			str[length] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}

#include <stdio.h>
#include <stdlib.h>

static int ft_get_num_length(int n);
char *ft_itoa(int n);

static int ft_get_num_length(int n)
{
    int length;
    long num;

    num = n;
    length = 0;
    if (num <= 0)
        length = 1;  // Considera o sinal ou zero.
    while (num != 0)
    {
        num = num / 10;
        length++;
    }
    return (length);
}

char *ft_itoa(int n)
{
    int length;
    long num;
    char *str;

    length = ft_get_num_length(n);
    str = (char *)malloc((length + 1) * sizeof(char));
    if (!str)
        return (NULL);
    str[length] = '\0'; // Define o caractere nulo no final da string.
    num = n;
    if (num < 0)
    {
        str[0] = '-'; // Se o número for negativo, coloca o sinal na posição 0.
        num = -num;   // Converte o número para positivo.
    }
    while (length > 0)
    {
        length--;
        if (str[length] != '-')
            str[length] = (num % 10) + '0'; // Converte o dígito para caractere.
        num = num / 10; // Remove o último dígito do número.
    }
    return (str);
}
