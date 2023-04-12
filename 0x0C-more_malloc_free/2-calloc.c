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
	char *str;
	unsigned int i = 0, len = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;
	str = malloc(len);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		str[i] = 0;
	}

	return (str);
}
