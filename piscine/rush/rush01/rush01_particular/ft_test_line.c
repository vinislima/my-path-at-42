
#include <stdio.h>

void	ft_test_line(int	*list, int	*grid);

void	ft_test_line(int	*list, int	*grid)
{
	int	c_line;
	int	sucess;

	sucess = 1;
	c_line = 0;
	while (c_line <= 16)
	{
		if (grid[c_line] + grid[c_line + 1] + grid[c_line + 2] + grid[ c_line + 3] == 10)
		{
			c_line = c_line + 4;
		}
		else
		{
			sucess = 0;
			break;
		}
	}
	printf("%i", c_line);
	printf("%i", sucess);
}


int	main()
{
	int input_list[] = {4, 3, 2, 1 , 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};

	//int grid[] = {1, 2, 3, 4, 2, 3, 4, 1, 3, 4, 1, 2, 4, 1, 2, 3}; //certo
	int grid[] = {2, 1, 3, 4, 3, 2, 4, 1, 4, 3, 1, 2, 1, 4, 2, 3}; //certo

	//int grid[] = {1, 2, 3, 4, 4, 3, 2, 1, 1, 1, 3, 4, 2, 4, 1, 3}; //errado linha e coluna

	ft_test_line(input_list, grid);
	return(0);
}