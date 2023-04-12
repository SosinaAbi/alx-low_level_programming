#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Returns a pointer for the
 * allocated memory of array.
 */

char *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;

	array = malloc(sizeof(size) * nmemb);

	if (array == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}

	return (array);
}
