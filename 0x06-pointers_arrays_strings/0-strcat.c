#include "holberton.h"
/**
 * _strcat - append to strings
 * @dest: string 1
 * @src: string 2
 * Return:dest .
 */
char *_strcat(char *dest, char *src)
{
	int c = 0, j = 0;

	while (dest[c] != '\0')
		c++;
	while (src[j] != '\0')
	{
		dest[c] = src[j];
		j++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
