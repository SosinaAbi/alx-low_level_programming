#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Finds square root of n.
 * @n: Integer parameter.
 *
 * Return: Returns square root of n.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Returns natural square
 * root of n.
 * @n: Integer parameter.
 * @i: Number to be tried.
 *
 * Return: Returns square root of n.
 */

int _sqrt(int n, int i)
{
	if (i * i > n || n < 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}

	return (_sqrt(n, i + 1));
}
