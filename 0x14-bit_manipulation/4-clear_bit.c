#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number decimal
 * @index: bit you want to change
 * Return: number change
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux = 1;

	if (index > sizeof(unsigned long int))
		return (-1);

	aux <<= index;
	*n = *n & ~aux;
	return (1);
}
