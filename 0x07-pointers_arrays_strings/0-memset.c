#include "holberton.h"
/**
 * _memset -  fills memory with a constant byte.
 * @s: pointer to string
 * @b: constant byte to be fill
 * @n: limit of bytes
 * Return: pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
