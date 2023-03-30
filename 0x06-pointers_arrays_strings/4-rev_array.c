#include "main.h"

/**
 * reverse_array - reverses content of array of integers.
 * @a: Array of integers to be reversed.
 * @n: Number of elements in an array.
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
