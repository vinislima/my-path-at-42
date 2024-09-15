/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:27:55 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/03 15:18:57 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	count_size;
	int	limit;

	limit = n;
	count_size = 0;
	while (count_size < limit && src[count_size] != '\0')
	{
		dest[count_size] = src[count_size];
		count_size++;
	}
	while (count_size < limit)
	{
		dest[count_size] = '\0';
		count_size++;
	}
	return (dest);
}
