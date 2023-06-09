#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints number of changes.
 * 1, 2, 5, 10, 25 coin changes.
 * @argc: Argument counter.
 * @argv: Argument vector.
 * Return: 0 if successful, 1 if not
 */
int main(int argc, char *argv[])
{
	int cents, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents > 0)
	{
		count++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", count);
	return (0);
}
