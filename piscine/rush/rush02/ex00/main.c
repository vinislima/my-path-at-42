/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:35:28 by pabperei          #+#    #+#             */
/*   Updated: 2024/09/01 20:47:19 by pabperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	num;

	if (argc != 2)
	{
		return (1);
	}
	num = ft_convert(argv[1]);
	convert_number(num);
	return (0);
}
