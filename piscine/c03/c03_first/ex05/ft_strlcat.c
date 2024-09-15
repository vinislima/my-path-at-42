/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 09:19:52 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/04 16:05:51 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	count_a;
	unsigned int	count_b;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		return (len_src + size);
	count_a = 0;
	count_b = len_dest;
	while ((count_b < size - 1) && (src[count_a] != '\0'))
	{
		dest[count_b] = src[count_a];
		count_a++;
	}
	dest[count_b] = '\0';
	return (len_dest + len_src);
}
