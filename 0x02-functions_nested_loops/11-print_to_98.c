#include "holberton.h"
#include<stdlib.h>
/**
 * print_to_98 - entry point
 *
 * @n: number to start
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int a, b, c, d;

	while (n != 98)
	{
		a = abs(n);
		b = a / 100;
		c = a / 10 % 10;
		d = a  % 10;
		if (b > 0)
		{
			a != n ? _putchar('-') : a;
			_putchar(b + '0');
			_putchar(c + '0');
			_putchar(d + '0');
		}
		else if (c > 0)
		{
			a != n ? _putchar('-') : a;
			_putchar(c + '0');
			_putchar(d + '0');
		}
		else
		{
			a != n ? _putchar('-') : a;
			_putchar(d + '0');
		}
		_putchar(',');
		_putchar(' ');
		n < 98 ? n++ : n--;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
