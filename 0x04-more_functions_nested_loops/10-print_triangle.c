#include "holberton.h"
/**
 * print_triangle - Prints triangles with #
 * @size: size of the triangle
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i = 0, k, j;

	if (size < 1)
	{
		_putchar('\n');
	}
	while (i < size)
	{
		j = size;
		k = 0;
		while (j > i + 1)
		{
			_putchar(' ');
			j--;
		}
		while (k < j)
		{
			_putchar('#');
			k++;
		}
		i++;
		_putchar('\n');
	}
}
