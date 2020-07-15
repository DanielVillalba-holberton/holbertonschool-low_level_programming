#include <stdlib.h>
/**
 * array_iterator - prints a name calls another function
 * @array: pointer of array
 * @size: size of array
 * @action: pointer to function (callback)
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
