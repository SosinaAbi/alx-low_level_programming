#include "main.h"

/**
 * print_numbers - prints numbers between 0 - 9
 * Return: no return
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
