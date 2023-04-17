#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of
 * type struct dog.
 * @d: Dog struct name.
 * @name: Name of the dog.
 * @age: The age of the dog.
 * @owner: Name of the owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
