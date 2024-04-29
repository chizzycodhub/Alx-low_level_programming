#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to 2 dimensional
 *              array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: On failure or if either width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid, w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(width * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (w = 0; w < width; w++)
	{
		grid[w] = (int *) malloc(height * sizeof(int));
		if (grid[w] == NULL)
		{
			for (h = 0; h < w; h++)
				free(grid[h]);
			free(grid);
			return (NULL);
		}

		for (h = 0; h < height; h++)
			grid[w][h] = 0;
	}

	return (grid);
}
