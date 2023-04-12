#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * of integers
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width; ++i)
	{
		grid[i] = malloc(height * sizeof(int));
		if (grid[i] == NULL)
		{
			for (y = 0; y < x;  y++)
				free(ptr[y]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < height; j++)
			grid[j][i] = 0;
	}
	return (grid);
}
