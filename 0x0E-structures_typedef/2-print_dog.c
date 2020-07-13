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
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	else if ((d->name == '\0') || (d->owner == '\0'))
	{
		printf("Name: %s\n", "(nil)");
		printf("Owner: %s\n", "(nil)");
	}
}
