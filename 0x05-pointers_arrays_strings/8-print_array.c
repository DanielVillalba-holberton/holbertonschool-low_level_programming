#include<stdio.h>

/**
 * print_array - print an array
 * @a: array
 * @n: number of elements
 * Return: void.
 */
void print_array(int *a, int n)
{

	int c = 0;

	while (c < n)
	{
		printf("%d%s", a[c], c < n - 1 ? ", " : "");
		c++;
	}
	printf("\n");
}
