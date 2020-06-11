#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, first_digit, second_digit;

	while (i < 100)
	{
		first_digit = (i / 10) % 10;
		putchar(first_digit + '0');
		second_digit = i % 10;
		putchar(second_digit + '0');
		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
