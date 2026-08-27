#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Pointer to 2 dimensional array of integers,
 * NULL if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0  || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * width);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width);

		if (grid[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
