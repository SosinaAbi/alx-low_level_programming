#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * Checks if argc is 4 and argv[2] is
 * valid operator from (+,-,*,/,%)
 * the using function pointer it prints
 * the result of operations.
 * @argc: Argument counter.
 * @argv: Argument vector.
 *
 * Return: 0 if Success.
 */

int main(int argc, char *argv[])
{
	int (*operat)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operat = get_op_func(argv[2]);

	if (!operat)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operat(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
