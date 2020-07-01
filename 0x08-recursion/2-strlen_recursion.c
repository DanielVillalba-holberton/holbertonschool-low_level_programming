#include "holberton.h"

/**
 * _strlen_recursion - counts the lenght of a string
 * @s: string
 * Return: Lenght.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
