#include "holberton.h"
/**
 * num_check - check the base of a number.
 * @base: number base
 * @exp: exponent to compare
 * Return: base, -1, or recursive function.
 */
int num_check(int base, int exp)
{
	if (base * base == exp)
		return (base);
	if (base * base > exp)
		return (-1);
	return (num_check(base + 1, exp));
}
/**
 * _sqrt_recursion - check the sqrt of a number.
 * @n: number to check
 * Return: base, -1, or recursive function.
 */
int _sqrt_recursion(int n)
{
	return (num_check(1, n));
}
