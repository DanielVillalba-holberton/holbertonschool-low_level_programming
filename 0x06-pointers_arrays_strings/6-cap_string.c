#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.s.
 * @s: string to capitalize
 * Return: string s.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		switch (s[i])
        {
            case ' ':
            case '\t':
            case '\n':
            case ',':
            case ';':
            case '.':
            case '!':
            case '?':
            case '"':
            case '(':
            case ')':
            case '{':
            case '}':
            if (s[i + 1] <123 && s[i + 1] > 96)
				s[i + 1] = s[i + 1] - 32;
        }
        i++;
	}
	return (s);
}
