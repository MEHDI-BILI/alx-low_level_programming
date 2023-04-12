#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: grid
 * @height: height
 * Return: grid
 */

void free_grid(int **grid, int height)
{
	int a = 0;

	for (; a < height; a++)
		free(grid[a]);
	free(grid);
}
