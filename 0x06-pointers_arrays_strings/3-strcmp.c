#include "holberton.h"

/**
 * _strcmp - compares two strings.
 *@s1: string 1
 *@s2: string 2
 * Return: 15 if s1 < s2,-15 s2 > s1, 0 s1 = s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, r;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (i < j)
		return (-15);
	else if (i == j)
		return (0);
	else
		return(15);
}
