#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - rev a string.
 * @s: string to revert
 * Return: void.
 */
void rev_string(char *s)
{
	int i = 0, j, aux;

	while (s[i + 1] != 0)
	{
		i++;
		printf("%d\n", i);
	}
	for (j = 0; j <= i ; j++)
	{
		aux = s[j];
		s[j] = s[i - j];
		s[i - j] = aux;
	}
}
