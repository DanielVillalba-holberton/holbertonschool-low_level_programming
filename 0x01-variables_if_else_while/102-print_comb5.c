#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, num1, num2, num3, num4;

	i = 0;

	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			num1 = i / 10;
			putchar(num1 + '0');
			num2 = i % 10;
			putchar(num2 + '0');
			putchar(' ');
			num3 = j / 10 % 10;
			putchar(num3 + '0');
			num4 = j % 10;
			putchar(num4 + '0');
			if (i == 98)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
