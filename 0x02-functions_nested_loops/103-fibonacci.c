#include<stdio.h>
/**
 * main - fibonacci sum
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 0;
	unsigned long a = 1, b = 2, c, sum;

	while (n < 50)
	{
		if (a < 4000000)
		{
			sum = sum + a;
		}
		c = b, b = a + b, a = c;
		n++;
	}
	printf("%lu\n", sum);
	return (0);
}