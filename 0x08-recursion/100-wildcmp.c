#include "holberton.h"
/**
 * wildcmp - check if two strings are equals.
 * @s1: string one
 * @s2: string two
 * Return: 1 or 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1);
	else
		return (0);
}
