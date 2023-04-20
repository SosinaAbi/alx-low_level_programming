#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Add the passed parameters.
 * @n: Number of passed numbers.
 *
 * Return: Return the sum of all numbers.
 */

int sum_them_all(const unsigned int n, ...)
{
	int n_sum = 0;
	unsigned int i;

	va_list argument_pointer;

	if (n == 0)
		return (0);

	va_start(argument_pointer, n);

	for (i = 0; i < n; i++)
	{
		n_sum += va_arg(argument_pointer, unsigned int);
	}

	va_end(argument_pointer);

	return (n_sum);
}
