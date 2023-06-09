#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments.
 * @argc: Number of argument.
 * @argv: Argument vector.
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
