#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc -  function that reallocates a memory block
 * @old_size: old size of the dinamic memory
 * @new_size: new size of the dinamic memory
 * @ptr: pointer to the memory previously allocated
 * Return: pointer to reallocates memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		return (pointer);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);
	while (i < old_size && i < new_size)
	{
		pointer[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (pointer);
}
