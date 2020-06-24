#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - rev a string
 * @s: string
 * Return: void.
 */
void print_rev(char *s)
{
	int i = 0, j;

	while (s[i] != 0) /*while a character exist*/
		i++;
	j = i - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
