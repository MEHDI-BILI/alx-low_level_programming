#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: 2d grid
 */

int **alloc_grid(int width, int height)
{
	int **grid, a, b;

	grid = malloc(sizeof(*grid) * height);

	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < height; a++)
		{
			grid[a] = malloc(sizeof(**grid) * width);
			if (grid[a] == 0)
			{
				while (a--)
					free(grid[a]);
				free(grid);
				return (NULL);
			}
			for (b = 0; b < width; b++)
				grid[a][b] = 0;
		}
	}
	return (grid);
}
