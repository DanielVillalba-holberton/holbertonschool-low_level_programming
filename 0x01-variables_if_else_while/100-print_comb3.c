#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, first_digit, second_digit;

	i = 1;

	while (i < 90)
	{
		if (i % 10 == 0)
		{
			j = i / 10;
			i += j + 1;
		}
		first_digit = (i / 10) % 10;
		putchar(first_digit + '0');
		second_digit = i % 10;
		putchar(second_digit + '0');
		if (i < 88)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
