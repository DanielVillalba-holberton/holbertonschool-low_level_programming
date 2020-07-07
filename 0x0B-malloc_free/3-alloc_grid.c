#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - grid of zeros
 * @width: widht of the grid
 * @height: height of the grid
 *
 * Return: NULL or the array.
*/
int **alloc_grid(int width, int height)
{
	int **grid, i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * (height));
	if (grid == NULL)
		return (NULL);
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
				free(grid[i--]);
			free(grid);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
