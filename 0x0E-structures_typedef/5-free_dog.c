#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that free new struct dog_t
 * @d: struct dog to be free, run dog! Enjoy your freedom!
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
