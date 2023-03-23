#include "main.h"
#define MAXSTRING 20

/**
 * more_numbers - prints numbers 0 - 14 ten times
 * Return: no return value
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
	_putchar('\n');
	}
}
