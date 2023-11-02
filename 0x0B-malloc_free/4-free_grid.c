#include "main.h"

/**
 * free_grid - it frees a 2 dimensional grid
 * previously created by your alloc_grid function
 *@grid: imput parameter
 *@height: imput parameter
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
