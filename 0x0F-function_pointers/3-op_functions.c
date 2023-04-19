#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Finds a + b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Returns a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Finds a - b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Returns a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Finds the result of a * b.
 * @a: First integer parameter.
 * @b: Second integer parameter.
 *
 * Return: t
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Finds a divided by b.
 * @a: First integer parameter.
 * @b: Second integer parameter.
 *
 * Return: Returns the result of a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Finds a % b.
 * @a: First integer parameter
 * @b: Second integer parameter
 *
 * Return: Returns a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
