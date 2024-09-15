/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thferrei <thferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:22:35 by thferrei          #+#    #+#             */
/*   Updated: 2024/08/25 18:31:09 by thferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Return a lenght of a string
int	str_len(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

// Input verification
int	input_verify(int n_param, char *str)
{
	int	res;
	int	len;
	int	count;

	res = 1;
	if (n_param != 2)
		return (0);
	len = str_len(str);
	if (len != 31)
		return (0);
	count = 0;
	while (count <= 30)
	{
		if (str[count] < 49)
			return (0);
		if (str[count] > 52)
			return (0);
		count = count + 2;
	}
	return (1);
}

// One and four can't repeat more than four times on a row or column
int	verify_max_numbers(int *input)
{
	int	i;
	int	count[2];

	count[0] = 0;
	count[1] = 0;
	i = 0;
	while (i < 16)
	{
		if (input[i] == 1)
			count[0]++;
		if (input[i] == 4)
			count[1]++;
		i++;
	}
	if (count[0] > 4)
		return (0);
	if (count[1] > 4)
		return (0);
	return (1);
}

int	ft_antisym(int *inp)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if ((inp[i] == inp[i + 4]) && (inp[i] != 2))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_corner(int *inp, int idx1, int idx2)
{
	if (inp[idx1] == 1 && inp[idx2] != 1)
		return (0);
	if (inp[idx2] == 1 && inp[idx1] != 1)
		return (0);
	if (inp[idx1] == 4 && inp[idx2] != 4)
		return (0);
	if (inp[idx2] == 4 && inp[idx1] != 4)
		return (0);
	return (1);
}
