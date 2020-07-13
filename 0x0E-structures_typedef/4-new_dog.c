#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: pointer to new name
 * @age: age of new dog
 * @owner: owner new dog
 * Return: snoop_dog struct of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;
	dog_t *snoop_dog; /*create pointer the type struct dog_t */

	snoop_dog = malloc(sizeof(dog_t)); /*allocates memory to snoop_dog */
	if (snoop_dog == NULL)
		return (snoop_dog);
	while (owner[i])
		i++;
	while (name[j])
		j++;
	/*allocates memory for element owner at the new structure*/
	snoop_dog->owner = malloc((i + 1) * sizeof(char));
	snoop_dog->name = malloc((j + 1) * sizeof(char));
	/*Return NULL if the function fails*/
	if (snoop_dog->owner == NULL || snoop_dog->name == NULL)
	{
		free(snoop_dog->owner);
		free(snoop_dog->name);
		free(snoop_dog);
		return (NULL);
	}
	i = 0;
	j = 0;
	while (name[i])
	{
		snoop_dog->name[i] = name[i];
		i++;
	}
	while (owner[j])
	{
		snoop_dog->owner[j] = owner[j];
		j++;
	}
	snoop_dog->name[i] = '\0';
	snoop_dog->owner[j] = '\0';
	snoop_dog->age = age;
	return (snoop_dog);
}
