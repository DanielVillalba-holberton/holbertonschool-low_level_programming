#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: matrix of integers
 * @size: size of one side
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i = 0, s1 = 0, s2 = 0;

	for (i = 0; i < (size * size); i = i + size)
	{
		s1 = s1 + a[i + (i / size)];
		s2 = s2 + a[i + size - (i / size) - 1];
	}
	printf("%d, %d\n", s1, s2);
}
