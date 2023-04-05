#include "main.h"

/**
 * _pow_recursion - Returns result of
 * x the power of y.
 * @x: Base number.
 * @y: Power number.
 *
 * Return: Returs the result.
 */

int _pow_recursion(int x, int y)
{
	int res = 1;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	y--;
	res = x * _pow_recursion(x, y);
	return (res);
}
