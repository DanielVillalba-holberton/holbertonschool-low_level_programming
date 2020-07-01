#include "holberton.h"
/**
 * factorial - shows the factorial of a number.
 * @n: number
 * Return: thw factorial of the number.
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
