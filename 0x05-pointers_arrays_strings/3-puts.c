#include "holberton.h"
/**
 * _puts - print a string
 * @str: string
 * Return: void.
 */
void _puts(char *str)
{
	while (*str) /*while a character exist*/
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
