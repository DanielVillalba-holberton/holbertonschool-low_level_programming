#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string.
 * @s: stings to be parser
 * @c: character to be find
 * Return: NULL or pointer s.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);

	return (NULL);
}
