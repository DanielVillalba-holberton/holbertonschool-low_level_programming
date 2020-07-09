#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array,
 * @nmemb: memory needed in elements
 * @size: bytes size of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *array;

	if (size == 0 || nmemb == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
