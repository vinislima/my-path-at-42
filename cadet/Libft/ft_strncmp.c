/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:18:03 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/18 14:18:05 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	if (n <= 0)
		return (0);
	count = 0;
	while ((s1[count] == s2[count]) && (count < n - 1)
		&& (s1[count] && s2[count]))
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
