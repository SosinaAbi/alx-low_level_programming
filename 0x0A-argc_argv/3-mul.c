#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two integers.
 * @argc: Number of arguments.
 * @argv: Argument vector.
 *
 * Return: Returns 0 if successful.
 */

int main(int argc, char *argv[])
{
	int x = 0, y = 0, z;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		z = x * y;
		printf("%d\n", z);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

