#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates some size of char array
 * with the value of char 'c'
 * @size: size of an array.
 * @c: element of an array.
 *
 * Return: Pointer of an array.
 */

char *create_array(unsigned int size, char c)
{
	int i;

	char *ptr = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*ptr[i] = c;
	}

	return (ptr);
}
