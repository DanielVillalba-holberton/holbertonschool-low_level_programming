#include "holberton.h"
/**
 * print_square - prints squares.
 * @size: size of square
 * Return: Always 0.
 */

void print_square(int size)
{
	int i = 0, size2 = size;

	if (size < 1)
	{
		_putchar('\n');
	}
	while (size2 > 0)
	{
		for (i = size; i > 0; i--)
		{
			_putchar('#');
		}
		_putchar('\n');
		size2--;
	}
}
