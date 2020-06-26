#include "holberton.h"
/**
 * _strncpy - copies string
 * @dest: destination string
 * @src: source string
 * @n: bytes to be copied
 *
 * Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
