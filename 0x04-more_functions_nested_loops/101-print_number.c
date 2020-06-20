#include "holberton.h"
/**
 * print_number - print an integer
 * @n: int
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		num = -1 * num;
		_putchar('-');
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
