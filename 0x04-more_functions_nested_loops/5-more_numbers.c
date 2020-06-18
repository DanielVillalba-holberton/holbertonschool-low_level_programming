#include "holberton.h"
/**
 * more_numbers - print number 0-14 10 times
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	char c, n;

	for (c = 0; c < 10; c++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
				_putchar('1');
			_putchar(n % 10 + 48);
		}
		_putchar('\n');
	}
}
