#include "function_pointers.h"
/**
 * int_index - function to searches an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 * Return: integer found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
