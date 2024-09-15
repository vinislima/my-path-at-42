
#include <stdio.h>

void	ft_test_input_collun(int	*list, int	*grid);

void	ft_test_input_collun(int	*list, int	*grid)
{
	int	sucess;
	int	c_matrix;
	int	c_each;
	int	c_col;
	int check;

	sucess = 1;
	c_matrix = 0;

	
	c_each = 0;
	c_col = 0;
	while (c_each <= 3)
	{
		check = 0;
		while (grid[c_col] < list[c_each])
		{
			c_col = c_col + 4;
			check++;
		}
		if(check < list[c_each])
		{
			printf("%i, certo", check);
			continue;
		}
		else
		{
			printf("%i, fail", check);
			continue;
		}
	}
	c_each++;
	printf("%i", c_each);
	printf("%i", sucess);
}


int	main()
{
	int input_list[] = {4, 3, 2, 1 , 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};

	//int grid[] = {1, 2, 3, 4, 2, 3, 4, 1, 3, 4, 1, 2, 4, 1, 2, 3}; //certo
	//int grid[] = {2, 1, 3, 4, 3, 2, 4, 1, 4, 3, 1, 2, 1, 4, 2, 3}; //certo

	int grid[] = {1, 2, 3, 4, 4, 3, 2, 1, 1, 1, 3, 4, 2, 4, 1, 3}; //errado linha e coluna
	
	ft_test_input_collun(input_list, grid);
	return(0);
}