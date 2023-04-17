#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Prints name, age and owner of
 * new datatype dog_t dog.
 * @name: Name of new dog.
 * @age: Age of new dog.
 * @owner: Owner of new dog.
 * Return: nwq dog d
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
