#include "main.h"
#include <stdio.h>

/**
 * main - Prints number of arguments.
 * @argc: Number of arguments.
 * @argv: Argument vector.
 *
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
