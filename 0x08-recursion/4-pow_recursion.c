#include "holberton.h"
/**
 * _pow_recursion - pow of a number with recursion.
 * @base: number base
 * @pow: pow to elevate
 * Return: Always 0.
 */
int _pow_recursion(int base, int pow)
{
	if (pow < 0)
		return (-1);
	if (pow == 0)
		return (1);
	return (pow * _pow_recursion(base, pow - 1));
}
