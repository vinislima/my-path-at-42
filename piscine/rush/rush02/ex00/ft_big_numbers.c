/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:20:09 by pabperei          #+#    #+#             */
/*   Updated: 2024/09/01 21:23:45 by pabperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	append_str(char **dest, const char *src);
void	num_to_text(int num, char **buffer);
void	ft_big_numbers(int billions, int millions, int thousands, char *ptr, char **units, char **teens, char **tens, char **hundreds);


void	ft_big_numbers(int billions, int millions, int thousands, char *ptr)
{
	if (billions > 0)
	{
		num_to_text(billions, &ptr);
		append_str(&ptr, " billion");
		if (millions > 0 || thousands > 0 || num > 0)
			append_str(&ptr, " e ");
	}
	if (millions > 0)
	{
		num_to_text(millions, &ptr);
		append_str(&ptr, " million");
		if (thousands > 0 || num > 0)
			append_str(&ptr, " and ");
	}
	if (thousands > 0)
	{
		num_to_text(thousands, &ptr);
		append_str(&ptr, " thousand");
		if (num > 0)
			append_str(&ptr, " and ");
	}
	if (num > 0)
		num_to_text(num, &ptr);
}
