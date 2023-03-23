#include "main.h"

/**
 * print_line - prints n number of _
 * @n: number of _
 * Return: no return value
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
