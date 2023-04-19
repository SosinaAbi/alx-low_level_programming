#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Prints elements of an array
 * @array: Integer array.
 * @size: Size of the array.
 * @action: Function pointer.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
