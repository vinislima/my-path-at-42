/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 08:37:40 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/28 09:37:27 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);
int	ft_strlen(char *str);

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

int	ft_str_is_lowercase(char *str)
{
	int	count_str;

	if (ft_strlen(str) <= 0)
		return (1);
	else
	{
		count_str = 0;
		while (str[count_str] != '\0')
		{
			if (str[count_str] <= 96 || str[count_str] >= 123)
				return (0);
			count_str++;
		}
	}
	return (1);
}
