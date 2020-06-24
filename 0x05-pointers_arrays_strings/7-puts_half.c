#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - printf the second half of an array.
 * @str: array parser
 * Return: void.
 */
void puts_half(char *str)
{
	int i, j, k;

	while (str[i] != 0)
		i++;
	printf("%d\n", i);
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
			printf("j: %d\n", j);
		}
	}
	else if (i % 2 != 0)
	{
		for (k = i / 2 + 1; k < i; k++)
		{
			_putchar(str[k]);
			printf("k: %d\n", k);
		}
	}
}
