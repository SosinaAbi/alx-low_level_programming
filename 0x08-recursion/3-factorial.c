#include "main.h"

/**
 * factorial - Returns n factorial.
 * @n: Integer number.
 *
 * Return: Returns factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
