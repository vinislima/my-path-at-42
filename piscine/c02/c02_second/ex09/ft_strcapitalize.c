/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:20:19 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/02 12:06:31 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);
int		ft_strlen(char *str);
char	*ft_strlowcase(char *str);

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

char	*ft_strlowcase(char *str)
{
	int	count_str;

	if (ft_strlen(str) <= 0)
		return (str);
	else
	{
		count_str = 0;
		while (str[count_str] != '\0')
		{	
			if (str[count_str] >= 65 && str[count_str] <= 90)
				str[count_str] = str[count_str] + 32;
			count_str++;
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	begin_word;

	count = 0;
	begin_word = 1;
	ft_strlowcase(str);
	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
			begin_word = 0;
		else if ((str[count] >= 'a' && str[count] <= 'z') && begin_word == 1)
		{
			if (str[count] >= 'a' && str[count] <= 'z')
				str[count] = str[count] - 32;
			begin_word = 0;
		}
		else if (!(str[count] >= 'a' && str[count] <= 'z')
			&& !(str[count] >= '0' && str[count] <= '9'))
		{
			begin_word = 1;
		}
		count++;
	}
	return (str);
}
