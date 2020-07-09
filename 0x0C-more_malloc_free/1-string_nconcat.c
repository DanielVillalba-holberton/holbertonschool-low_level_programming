#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - allocates memory using malloc
 * @s1: string 1
 * @s2: string 2
 * n: bytes
 * Return: pointer to array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0, lent;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (len2 <= n)
		n = len2;
	lent = len1 + n + 1;
	array = malloc(sizeof(char) * lent);
	if (array == NULL)
		return (NULL);
	while (i < len1)
	{
		array[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		array[i] = s2[j];
		i++;
		j++;
	}
	array[i] = '\0';
	return (array);
}
