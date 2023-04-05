#include "main.h"

/**
 * _sqrt_recursion - Returns natural square
 * root of n.
 * @n: Integer parameter.
 *
 * Return: Returns square root of n.
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i * i > n || n < 0)
		return (-1);
	else if (i * i == n)
		return (i);

	i++;
	_sqrt_recursion(n);
}
