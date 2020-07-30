#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number decimal
 * @index: bit you want to get
 * Return: value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	else if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
