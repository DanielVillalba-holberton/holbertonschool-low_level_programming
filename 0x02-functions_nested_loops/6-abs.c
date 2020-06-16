#include "holberton.h"
/**
 * _abs - absolut of a number
 *
 * @n: number to be checked
 * Return: abs_n absolute of the number
 */
int _abs(int n)
{
	int abs_n;

	if (n < 0)
	{
		abs_n = n * -1;
	}
	else
	{
		abs_n = n;
	}
	return (abs_n);
}
