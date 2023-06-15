#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Gives new size for old pointer
 * @ptr: Old pointer with old size
 * @old_size: Old size of a ptr
 * @new_size: New size of pointer
 *
 * Return: Returns new memory location with
 * new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *newptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newptr = malloc(new_size);

		if (newptr == NULL)
			return (NULL);
		return (newptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newptr = malloc(new_size);

	if (newptr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		newptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (newptr);
}
