/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:13:26 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/28 12:13:21 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);
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

char	*ft_strupcase(char *str)
{
	int	count_str;

	if (ft_strlen(str) <= 0)
		return (str);
	else
	{
		count_str = 0;
		while (str[count_str] != '\0')
		{
			if (str[count_str] >= 97 && str[count_str] <= 122)
				str[count_str] = str[count_str] - 32;
			count_str++;
		}
	}
	return (str);
}
