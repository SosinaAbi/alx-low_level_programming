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
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
	else if ((*d).name == NULL)
	{
		printf("Name: (nil)\nAge: %f\nOwner: %s\n", (*d).age, (*d).owner);
	}
}
