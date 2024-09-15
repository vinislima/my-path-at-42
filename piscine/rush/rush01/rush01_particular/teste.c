#include <stdio.h>

void	ft_test_input_collun(int *list, int *grid)
{
	int success;
	int c_each;
	int c_col;

	success = 1;
	c_each = 0;

	while (c_each < 4)
	{
		int max_height = 0;
		int visible_count = 0;

		c_col = c_each;
		while (c_col < 16)
		{
			if (grid[c_col] > max_height)
			{
				max_height = grid[c_col];
				visible_count++;
			}
			c_col += 4;
		}

		if (visible_count != list[c_each])
		{
			success = 0;
			break;
		}
		c_each++;
	}
	
	printf("Result: %i\n", success);
}

int	main()
{
	int input_list[] = {4, 3, 2, 1 , 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};

	int grid[] = {2, 1, 3, 4, 3, 2, 4, 1, 4, 3, 1, 2, 1, 4, 2, 3}; //exemplo certo

	ft_test_input_collun(input_list, grid);
	return(0);
}
