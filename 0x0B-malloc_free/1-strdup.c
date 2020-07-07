#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a array in a new allocated memory
 * @str: array
 *
 * Return: NULL or the array.
*/
char *_strdup(char *str)
{
	char *array;
	unsigned int i, c = 0;

	if (str == 0)
		return (0);
	while (str[c] != 0)
		c++;
    c++;
	array = (char *)malloc(sizeof(char) * c);
	if (array == 0)
		return (array);
	for (i = 0; i < c; i++)
		array[i] = str[i];
	array[i] = 0;
	return (array);
}
