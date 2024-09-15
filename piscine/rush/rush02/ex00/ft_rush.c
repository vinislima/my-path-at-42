/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:27:10 by pabperei          #+#    #+#             */
/*   Updated: 2024/09/01 21:27:14 by pabperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>

void	ft_billions_millions_thousands(int billions, int millions,
			int thousands, char *ptr);

int		ft_convert(char *str);

char	*g_units[];
char	*g_teens[];
char	*g_tens[];
char	*g_hundreds[];

g_units[] = {"", "one", "two", "three", "four", "five",
	"six", "seven", "eigth", "nine"};
g_teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
	"fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
g_tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty",
	"seventy", "eighty", "ninety"};
g_hudreds[] = {"", "hundred", "two hudred", "thee hundred", "four hundred",
	"five hundred", "six hundred", "seven hundred",
	"eight hundred", "nine hundred"};

void	append_str(char **dest, const char *src)
{
	while (*src)
	{
		**dest = *src;
		(*dest)++;
		src++;
	}
}

void	num_to_text(int num, char **buffer)
{
	if (num == 0)
	{
		append_str(buffer, "zero");
		return ;
	}
	if (num / 100 > 0)
	{
		append_str(buffer, hundreds[num / 100]);
		if (num % 100 > 0)
			append_str(buffer, " and ");
	}
	num = num % 100;
	if (num >= 10 && num <= 19)
		append_str(buffer, teens[num - 10]);
	else
	{
		if (num / 10 > 1)
		{
			append_str(buffer, tens[num / 10]);
			if (num % 10 > 0)
				append_str(buffer, " and ");
		}
		if (num % 10 > 0)
			append_str(buffer, units[num % 10]);
	}
}

void	convert_number(int num)
{
	char	*buffer;
	char	*ptr;
	int		billions;
	int		millions;
	int		thousands;

	*buffer = (char *)malloc(1000);
	*ptr = buffer;
	if (num == 1000000000)
		append_str(&ptr, "one billion");
	else
	{
		billions = num / 1000000000;
		num = num % 1000000000;
		millions = num / 1000000;
		num = num % 1000000;
		thousands = num / 1000;
		num = num % 1000;
		ft_billions_millions_thousands(billions, millions, thousands, &ptr);
	}
	*ptr = '\0';
	write(1, buffer, ptr - buffer);
	write(1, "\n", 1);
	free(buffer);
}
