#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: ointer to struct
 * @name: name dog
 * @age: dog age
 * @owner: dogs owner
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
