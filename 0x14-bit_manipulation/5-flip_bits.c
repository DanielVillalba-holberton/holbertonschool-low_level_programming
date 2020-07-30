#include "holberton.h"
/**
 * flip_bits - sets the value of a bit to 0 at a given index.
 * @n: number decimal 1
 * @m: number decimal 2
 * Return: bits needed change to flips two numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ind_change, c = 0;

	ind_change = m ^ n;

	while (ind_change)
	{
		c += ind_change & 1;
		ind_change >>= 1;
	}
	return (c);
}
