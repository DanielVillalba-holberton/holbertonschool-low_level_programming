#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - function that free allocate memory
 * @grid: grid
 * @height: heigth of the array
 *
 * Return: nothing.
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
