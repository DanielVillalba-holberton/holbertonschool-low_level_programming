#include "holberton.h"
/**
 * puts_half - printf the second half of an array.
 * @str: array parser
 * Return: void.
 */
void puts_half(char *str)
{
	int i, j;

	while (str[i] != 0)
		i++;
	if (i > 1)
		for (j = i / 2 + (i % 2 == 0 ? 0 : 1); j < i; j++)
			_putchar(str[j]);
}
