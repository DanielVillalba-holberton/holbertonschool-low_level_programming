#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number in decimal
 * Return: nothing void
 */
void print_binary(unsigned long int n)
{
	unsigned long int aux;
	int ind = 0;

	aux = n;
	while ((aux >>= 1) > 0)
		ind++;

	while (ind >= 0)
	{
		if ((n >> ind--) & 1)
			_putchar ('1');
		else
			_putchar ('0');
	}
}
