#include "holberton.h"
/**
 * print_times_table - prints table n
 * @n: value of n tables
 *
 * Return: void
 */
void print_times_table(int n)
{
	int row, col, sum, n1, n2, n3;

	if (n >= 0 && n < 16)
	{
		col = 0;
		while (col <= n)
		{
			_putchar('0');
			row = 1;
			while (row <= n)
			{
				_putchar(',');
				_putchar(' ');
				sum = col * row;
				n1 = sum / 100;
				n2 = (sum / 10) % 10;
				n3 = sum % 10;
				if (sum < 10)
				{
					_putchar(' ');					
					_putchar(' ');
					_putchar(sum + '0');
				}
				else if (sum >= 10 && sum < 100)
				{
					_putchar(' ');					
					_putchar(n2 + '0');
					_putchar(n3 + '0');
				}
				else
				{
					_putchar(n1 + '0');
					_putchar(n2 + '0');
					_putchar(n3 + '0');
				}
				row++;
			}
			_putchar('\n');
			col++;
		}
	}
}
