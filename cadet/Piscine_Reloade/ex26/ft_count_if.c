/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:36:12 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/09 14:36:14 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_if(char **tab, int (*f)(char*));

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	count_a;

	count = 0;
	count_a = 0;
	while (tab[count] != NULL)
	{
		if (f(tab[count]) == 1)
			count_a++;
		count++;
	}
	return (count_a);
}
