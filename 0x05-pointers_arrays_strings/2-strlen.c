#include "holberton.h"
/**
 * _strlen - lenght of string.
 * @s: string
 * Return: c lenght.
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c = c + 1;
	}
	return (c);
}
