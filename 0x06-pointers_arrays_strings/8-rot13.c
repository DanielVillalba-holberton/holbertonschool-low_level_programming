#include "holberton.h"

/**
 * rot13 - code a string to rot13.
 * @s: string to convert
 * Return: string converted.
 */
char *rot13(char *s)
{
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char torot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (s[i] == letter[j])
				s[i] = torot13[j], j = 52;
			j++;
		}
		i++;
	}
	return (s);
}
