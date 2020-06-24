#include "holberton.h"
/**
 * reset_to_98 - update the value at pointer.
 *@n: pointer
 * Return: void.
 */
void reset_to_98(int *n)
{
	int y = *n; /* rescue number at position of memory*/

	y = 98;
	*n = y; /*save a value in a memory position of memory*/
}
