#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: size of the array
 * @c: char to be printed
 *
 * Return: NULL or the array.
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		*(array + i) = c;
	if (array == NULL)
		return (NULL);
	return (array);
}
