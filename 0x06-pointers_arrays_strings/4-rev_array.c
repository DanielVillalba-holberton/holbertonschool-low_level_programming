#include "holberton.h"

/**
 * reverse_array - reverse an array.
 * @a: array of integers
 * @n: the number of elements to swap
 *
 * Return: void nothing.
 */
void reverse_array(int *a, int n)
{
	int i = n - 1, j = 0, aux;

	while (j < n / 2)
	{
		aux = a[j];
		a[j] = a[i];
		a[i] = aux;
		j++;
		i--;
	}
}
