/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:13:23 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/27 16:31:20 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	count_char;

	count_char = 0;
	while (src[count_char] != '\0')
	{
		dest[count_char] = src[count_char];
		count_char++;
	}
	dest[count_char] = '\0';
	return (dest);
}
