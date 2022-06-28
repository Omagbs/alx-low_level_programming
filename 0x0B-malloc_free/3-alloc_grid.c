#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			i = 0;

			while (i < height)
			{
				free(grid[i]);
				i++;
			}
			free(grid);
			return (NULL);
		}
		while (j < 0)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
