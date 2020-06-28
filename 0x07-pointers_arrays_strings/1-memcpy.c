#include "holberton.h"
/**
 * _memcpy - copies memory area.
 * @dest: destiny string
 * @src: source string
 * @n: bytes to be copied
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
