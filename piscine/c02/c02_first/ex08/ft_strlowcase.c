/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:16:50 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/28 15:16:04 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);
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
