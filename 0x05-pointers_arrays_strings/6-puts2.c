#include "holberton.h"

/**
 * puts2 - prints array 0,2,4....
 * @str: array to parser
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
