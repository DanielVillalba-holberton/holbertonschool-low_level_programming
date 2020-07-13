#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name == '\0' ? "(nil" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == '\0' ? "(nil" : d->owner);
	}
}
