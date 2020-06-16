#include "holberton.h"
/**
 * _isalpha- Checks if input character is alphabet
 *
 * @c: letter to be checked
 * Return: 0 for non character 1 for yes
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
