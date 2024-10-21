/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:48:24 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/18 10:48:27 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c);

size_t	ft_strlen(const char *c)
{
	size_t	count;

	count = 0;
	while (c[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t	count;
	size_t	str_len;

	str_len = ft_strlen(s);
	count = str_len - 1;
	while (count >= 0)
	{
		if (s[count] == (char)c)
			return ((char *)&s[count]);
		count--;
	}
	if (c == '\0')
		return ((char *)&s[0]);
	return (NULL);
}
