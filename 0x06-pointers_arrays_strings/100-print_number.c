#include "holberton.h"
/**
 * print_number - prints a number
 * @n: the number to print
 *
 * Return: void
 */
void print_number(int n)
{
	int aux, size = 1, a, b;

	b = n % 10;
	n = n / 10;
	aux = n;
	if (b < 0)
	{
		b = -1 * b;
		aux = -1 * aux;
		n = -1 * n;
		_putchar('-');
	}
	if (aux > 0)
	{
		while (aux / 10 != 0)
		{
			aux = aux / 10;
			size = size * 10;
		}
		while (size > 0)
		{
			a = n / size;
			_putchar('0' + a);
			n = n - a * size;
			size = size / 10;
		}
	}
	_putchar('0' + b);
}
