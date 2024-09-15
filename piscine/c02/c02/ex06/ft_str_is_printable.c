/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:44:44 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/03 08:37:34 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);
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

int	ft_str_is_printable(char *str)
{
	int	count_str;

	if (ft_strlen(str) <= 0)
		return (1);
	else
	{
		count_str = 0;
		while (str[count_str] != '\0')
		{
			if (str[count_str] <= 31 || str[count_str] >= 127)
				return (0);
			else if (str[count_str] == '\n')
				return (0);
			count_str++;
		}
	}
	return (1);
}
