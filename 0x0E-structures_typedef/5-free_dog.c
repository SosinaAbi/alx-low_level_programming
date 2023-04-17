#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees heap contained by dog
 * @d: dog_t datatype structure
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).owner);
		free((*d).name);
		free(d);
	}
}
