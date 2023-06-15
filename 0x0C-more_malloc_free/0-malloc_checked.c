#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Checks if memory
 * allocation is successful.
 * @b: Integer parameter contains
 * memory size.
 *
 * Return: Returns a pointer to allocated
 * memory.
 */

void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(b);

	if (mal == NULL)
		exit(98);
	return (mal);
}
