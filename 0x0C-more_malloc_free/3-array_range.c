#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: Starting element of an array.
 * @max: Ending element of an array.
 *
 * Return: Returns a pointer to an array.
 */

int *array_range(int min, int max)
{
	int range = 0, i;
	int *list;

	if (min > max)
		return (NULL);
	range = max - min;
	list = malloc(sizeof(int) * range + 1);

	if (list == NULL)
		return (NULL);

	for (i = 0; i <= range; i++)
	{
		list[i] = min;
		min++;
	}

	return (min);
}
