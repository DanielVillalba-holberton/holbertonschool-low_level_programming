#include "holberton.h"
/**
 * _strncat - concatenate two strings
 * @dest: string destiny
 * @src: string source
 * @n: number of bytes
 * Return:dest .
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[b] != '\0')
		b++;
	while (a < n && src[a] != '\0')
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
