#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two arrays in a new allocated memory
 * @s1: array #1
 * @s2: array #2
 *
 * Return: NULL or the array.
*/
char *str_concat(char *s1, char *s2)
{
	char *array;
	unsigned int i = 0, c, d, j = 0, n = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	n = i + j + 1;
	array = (char *)malloc(sizeof(char) * n);
	if (array == NULL)
		return (array);
	for (c = 0; c < i; c++)
		array[c] = s1[c];
	for (d = i, c = 0; d < n; d++, c++)
		array[d] = s2[c];
	array[n] = 0;
	return (array);
}
