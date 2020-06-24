#include "holberton.h"
/**
 * _strcpy - copy an array pointer.
 * @dest: array destiny
 * @src: array to copy
 * Return: dest array copied.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}