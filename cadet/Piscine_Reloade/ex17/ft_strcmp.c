/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:57:26 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/03 15:57:28 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while ((s1[count] == s2[count])
		&& (s1[count] != '\0') && (s2[count] != '\0'))
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
