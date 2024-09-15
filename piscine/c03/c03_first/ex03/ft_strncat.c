/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:07:09 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/04 20:14:27 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_strlen(char *str);

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	count_a;
	int	size_str;
	int	change;

	size_str = ft_strlen(dest);
	change = nb;
	count_a = 0;
	while ((count_a < change) && (src[count_a] != '\0'))
	{
		dest[size_str] = src[count_a];
		count_a++;
		size_str++;
	}
	dest[size_str] = '\0';
	return (dest);
}
