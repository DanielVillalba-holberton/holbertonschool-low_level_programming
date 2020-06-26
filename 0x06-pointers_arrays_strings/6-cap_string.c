#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.s.
 * @s: string to capitalize
 * Return: string s.
 */
char *cap_string(char *s)
{
	int i = 1, j = 0;
	char characters[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};

	while (s[i] != '\0')
	{
		j = 0;
		while (characters[j] != '\0')
		{
			if (s[i - 1] == characters[j] && s[i] > 96 && s[i] < 123)
			{
				s[i] = s[i] - 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}
