#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: string to be parser
 * @needle: string to be find
 * Return: needle or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int c;

	while (*haystack != '\0')
	{
		c = 0;
		while (*needle == *haystack && *needle != '\0' && *haystack != '\0')
		{
			haystack++;
			needle++;
			c++;
		}
		if (*needle == '\0')
			return (haystack - c);
		haystack = haystack - (c - 1);
		needle = needle - c;
	}
	return (NULL);
}
