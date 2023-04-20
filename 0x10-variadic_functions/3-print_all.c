#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints all types of
 * variables.
 * @format: String parameter which
 * contains the variable formats.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *ch, *separator = "";

	va_list argument_pointer;

	va_start(argument_pointer, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(argument_pointer, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(argument_pointer, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(argument_pointer, double));
					break;
				case 's':
					ch = va_arg(argument_pointer, char *);
					if (!ch)
						ch = "(nil)";
					printf("%s%s", separator, ch);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(argument_pointer);
}
