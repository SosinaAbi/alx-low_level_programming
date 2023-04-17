#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Prints dog's name
 * age and owner.
 * @d: Dog structure.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", ((*d).owner) ? (*d).owner : "(nil)");
	}
}
