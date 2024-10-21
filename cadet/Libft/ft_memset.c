/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:51:57 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/21 11:52:01 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp_str;
	size_t			count;

	temp_str = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		temp_str[count] = (unsigned char)c;
		count++;
	}
	return (s);
}
