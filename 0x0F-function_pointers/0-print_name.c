#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: String parameter.
 * @f: Function parameter.
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
