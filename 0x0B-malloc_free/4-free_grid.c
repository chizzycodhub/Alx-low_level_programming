#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid created by the
 *             alloc_grid function
 *
 * @grid: The 2-dimensional array of integer to be freed
 * @height: The height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
