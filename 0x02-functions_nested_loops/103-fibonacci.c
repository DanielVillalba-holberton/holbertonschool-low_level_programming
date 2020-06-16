#include<stdio.h>
/**
 * main - fibonacci sum
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long a = 1, b = 2, c, sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum = sum + a;
		}
		c = b, b = a + b, a = c;
	}
	printf("%lu\n", sum);
	return (0);
}
