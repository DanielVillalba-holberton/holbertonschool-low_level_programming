#include "holberton.h"

/**
 * leet - convert string into 1337.
 * @s: string to convert
 * Return: string s converted.
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char leeter[] = "aAEeoOTtlL";
	char l337[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == leeter[j])
				s[i] = l337[j];
			j++;
		}
		i++;
	}
	return (s);
}
