#include "main.h"

/**
 * _print_rev_recursion -Prints string in reverse.
 * @s: String parameter.
 *
 * Return: None.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s--;
	_print_rev_recursion(s);
}
