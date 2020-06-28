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
	int i = 0, c = 0, j, k = 0;

	while (needle[k] != '\0')
		k++;
	while (haystack[i] != '\0')
	{
		if (c == 0)
		{
			for (j = 0; needle[j]; j++)
				if (needle[j] == haystack[i])
					c++;
					break;
		}
		if (c != 0)
		{
			for (j = c; needle[j]; j++)
				if (needle[j] == haystack[i])
					c++;
		}
		i++;
	}
	if (c == k)
		return (needle);

	return ('\0');
}
