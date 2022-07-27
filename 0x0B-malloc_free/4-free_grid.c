#include "main.h"

/**
 * free_grid - remove allocation
 * @grid: grid to be free
 * @height: heightof matrix
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
