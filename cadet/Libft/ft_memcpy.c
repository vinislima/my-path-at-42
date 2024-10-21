/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:06:30 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/21 17:38:37 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;
	size_t			count;

	if (dest == (void *)0 || src == (void *)0)
		return (dest);
	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	count = 0;
	while (count < n)
	{
		temp_dest[count] = temp_src[count];
		count++;
	}
	return (dest);
}
