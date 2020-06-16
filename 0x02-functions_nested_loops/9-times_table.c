#include "holberton.h"
/**
 *times_table - prints the 9 times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int row, col, sum, t;

	col = 0;
	while (col < 10)
	{
		_putchar('0');
		row = 1;
		while (row < 10)
		{
			_putchar(',');
			_putchar(' ');
			sum = col * row;
			t = sum / 10;
			if (sum < 10)
			{
				_putchar(' ');
				_putchar(sum + '0');
			}
			else
			{
				_putchar(t + '0');
				_putchar(sum % 10 + '0');
			}
			row++;
		}
		_putchar('\n');
		col++;
	}
}
