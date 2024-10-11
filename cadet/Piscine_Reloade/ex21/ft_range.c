/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:05:13 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/07 11:05:18 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	len;
	int	count;
	int	*range;

	if (min >= max)
		return (NULL);
	len = max - min;
	if (len < 0)
		len = (len * -1) + 1;
	else
		len = len + 1;
	range = (int *) malloc(len * sizeof(int));
	if (range == NULL)
		return (NULL);
	count = 0;
	while (count < len)
	{
		range[count] = min + count;
		count++;
	}
	return (range);
}
