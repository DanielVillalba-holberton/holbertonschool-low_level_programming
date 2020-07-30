#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number decimal
 * @index: bit you want to change
 * Return: number change
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1, aux = 1;

	if (index > sizeof(unsigned long int))
		return (-1);
	while (i <= index)
	{
		aux = aux << 1;
		i++;
	}
	*n = *n | aux;
	return (1);
}
