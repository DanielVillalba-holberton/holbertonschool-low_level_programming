#include "holberton.h"
/**
 * print_diagonal - prints a diagonal.
 *@n: number for the diagonal size
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int aux = n, i;

	if (n < 1)
	{
		_putchar('\n');
	}
	for (; aux > 0; aux--)
	{
		for (i = n - aux; i > 0; i--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
