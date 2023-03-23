#include "main.h"

/**
 * print_number - prints any integer
 * @n: integer parameter
 */

void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		x = n;
	}
	x /= 10;
	if (x != 0)
	{
		print_number(x);
	}
	_putchar((unsigned int) n % 10 + '0');
}
