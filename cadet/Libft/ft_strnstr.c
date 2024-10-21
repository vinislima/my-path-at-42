/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:00:33 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/18 16:00:36 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count_big;
	size_t	count_little;

	if (little[0] == '\0')
		return ((char *)&big[0]);
	count_big = 0;
	while (big[count_big] != '\0' && count_big < len)
	{
		count_little = 0;
		while (big[count_big + count_little] == little[count_little])
		{
			count_little++;
			if (little[count_little] == '\0')
				return ((char *)&big[count_big]);
		}
		count_big++;
	}
	return (NULL);
}
