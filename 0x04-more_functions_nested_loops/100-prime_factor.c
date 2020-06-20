#include <stdio.h>
/**
 * main - prints largest prime factor of 612852475143 followed by '\n'
 *
 * Return: Always 0, Success!
 */
int main(void)
{
	unsigned long  num = 612852475143, new_n, i = 2;

	do {
		if (num % i == 0)
		{
			new_n = num / i;
			num = new_n;
		}
		i++;
	} while (i < num);
	printf("%lu\n", new_n);
	return (0);
}
