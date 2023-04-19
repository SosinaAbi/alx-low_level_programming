#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Prints the operation code of main
 * in hexadecimal.
 * @argc: Argument counter.
 * @argv: Argument vector.
 *
 * Return: 0 Always (Success).
 */

int main(int argc, char *argv[])
{
	unsigned char opcode;
	int bytes, i;
	int (*place)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)place;
		printf("%.2x", opcode);

		if (i == bytes - 1)
			continue;
		printf(" ");

		place++;
	}
	printf("\n");
	return (0);
}
