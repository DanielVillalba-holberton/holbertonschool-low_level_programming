#include "holberton.h"
/**
 *_isupper - checks if a letter is uppercase
 * @c: letter
 * Return: 1 or 0.
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
