#include<stdio.h>
/**
 * main - fibonacci to 50
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 0;
	unsigned long a = 1, b = 2, c;

	while (n < 50)
	{
		printf("%lu", a);
		if (n < 49)
		{
			printf(", ");
		}
		c = b, b = a + b, a = c;
		n++;
	}
	printf("\n");
	return (0);
}
