#include "holberton.h"
/**
 * swap_int - swaps values.
 * @a: pointer to a
 * @b: pointer to b
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int x = *a; /* look at the value save in the pointer of *a*/
	int y = *b; /* look at the value in the ointer *b */

	x = 42;
	*a = x; /* assign the value of x in the memory position of *a*/
	y = 98;
	*b = y; /* asaign the value of z to the memory position of *b */
}
