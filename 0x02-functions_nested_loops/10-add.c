#include "main.h"
/**
 * add - adds two integers
 * Return: returns added result
 * @x: integer parameters
 * @y: integer parameter
 */
int add(int x, int y)
{
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

