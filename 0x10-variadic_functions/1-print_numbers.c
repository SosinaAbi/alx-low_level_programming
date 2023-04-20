#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers separated
 * by separator.
 * @separator: Separates list of numbers.
 * @n: Number of numbers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list argument_pointer;

	va_start(argument_pointer, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argument_pointer, unsigned int));

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(argument_pointer);
}
