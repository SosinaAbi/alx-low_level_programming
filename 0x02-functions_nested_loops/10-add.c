#include "main.h"
/**
 * add - adds two integers
 * Return: returns added result
 * @int: integer parameters
 */
int add(int, int)
{
	int x, y;
	int sum = x + y;
	int d = 10;

	while ((sum / d) > 9)
	{
		d = d * 10;
	}

	while (d > 10)
	{
		_putchar((sum / d) + '0');
		d = d / 10;
	}
	_putchar((sum % d) + '0');
	_putchar('\n');
	return (x + y);
}

