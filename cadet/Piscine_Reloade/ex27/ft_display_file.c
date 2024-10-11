/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:18:41 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/09 17:18:43 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		file;
	ssize_t	bytes;
	char	buffer[4096];

	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	file = open(argv[1], O_RDONLY);
	if (file < 0)
		return (1);
	bytes = read(file, buffer, sizeof(buffer));
	while (bytes > 0)
	{
		write(1, buffer, bytes);
		bytes = read(file, buffer, sizeof(buffer));
	}
	close(file);
	return (0);
}
