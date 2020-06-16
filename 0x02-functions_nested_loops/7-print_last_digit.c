#include "holberton.h"
/**
 * print_last_digit- prints the last digit of a number.
 *
 * @n: number to be checked
 * Return: last_n last number
 */
int print_last_digit(int n)
{
	int last_n;

	last_n = n % 10;
	if (last_n < 0)
	{
		last_n = 0 - last_n;
	}
	_putchar(last_n + '0');
	return (last_n);
}
