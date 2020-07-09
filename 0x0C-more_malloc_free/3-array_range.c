#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: minimal naumber
 * @max: maximus number
 * Return: pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int *array, len, i = 0;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	while (i < len)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
