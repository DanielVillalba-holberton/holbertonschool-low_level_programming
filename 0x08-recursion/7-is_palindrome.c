#include "holberton.h"
/**
 * _strlen_recursion - check the lenght of a string.
 * @s: string
 * Return: recursive or 0.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
/**
 * check_strings - check if the strings are the same.
 * @s: string
 * @i: count 1
 * @j: count 2
 * Return: recursive or 0 or 1.
 */
int check_strings(char *s, int i, int j)
{
	if (s[i] != s[j])
		return (0);
	if (j == 0)
		return (1);
	return (check_strings(s, ++i, --j));
}
/**
 * is_palindrome - check the output of check_strings.
 * @s: string
 * Return: recursive or 1.
 */
int is_palindrome(char *s)
{
	char *t = s;

	if (*s == '\0')
		return (1);
	return (check_strings(t, 0, _strlen_recursion(s) - 1));
}
