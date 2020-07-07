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

	if (str == NULL)
		return (0);
	while (str[c] != '\0')
		c++;
	array = (char *)malloc(sizeof(char) * c);
	for (i = 0; str[i] != '\0'; i++)
		array[i] = str[i];
	array[i] = '\0';
	return (array);
}
