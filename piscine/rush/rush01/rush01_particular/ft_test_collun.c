
#include <stdio.h>

void	ft_test_collun(int	*list, int	*grid);

void	ft_test_collun(int	*list, int	*grid)
{
	int	c_col;
	int	sucess;

	sucess = 1;
	c_col = 0;
	while (c_col <= 3)
	{
		if (grid[c_col] + grid[c_col + 4] + grid[c_col + 8] + grid[ c_col + 12] == 10)
		{ 
			c_col++;
		}
		else
		{
			sucess = 0;
			break;
		}
	}
	printf("%i", c_col);
	printf("%i", sucess);
}


int	main()
{
	int input_list[] = {4, 3, 2, 1 , 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};

	//int grid[] = {1, 2, 3, 4, 2, 3, 4, 1, 3, 4, 1, 2, 4, 1, 2, 3}; //certo
	int grid[] = {2, 1, 3, 4, 3, 2, 4, 1, 4, 3, 1, 2, 1, 4, 2, 3}; //certo

	//int grid[] = {1, 2, 3, 4, 4, 3, 2, 1, 1, 1, 3, 4, 2, 4, 1, 3}; //errado linha e coluna
	
	ft_test_collun(input_list, grid);
	return(0);
}