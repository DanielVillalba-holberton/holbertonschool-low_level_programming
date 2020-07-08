#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of char
 * @size: size of the array
 * @c: char to be printed
 *
 * Return: NULL or the array.
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == NULL)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	array[i] = 0;
	return (array);
}
