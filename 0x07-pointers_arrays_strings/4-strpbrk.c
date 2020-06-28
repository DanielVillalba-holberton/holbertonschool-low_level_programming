#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be parser
 * @accept: bytes to be find
 * Return: a pointer to the byte or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j] && s[i] && accept[j])
				return (s + i);
		}
		i++;
	}
	return (NULL);
}
