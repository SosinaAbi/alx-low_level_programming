#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints list of strings
 * with separator.
 * @separator: Separator between strings.
 * @n: Number of strings.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ch;

	va_list argument_pointer;

	va_start(argument_pointer, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(argument_pointer, char *);
		if (ch == NULL)
			ch = "(nil)";
		printf("%s", ch);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(argument_pointer);
}
