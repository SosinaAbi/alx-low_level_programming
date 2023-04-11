#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print addition result.
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: 0 if successful, 1 if not.
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *str;

	for (i = 1; i < argc; i++)
	{
		str = argv[i];
		for (j = 0; j < strlen(str); j++)
		{
			if (str[j] > 57 || str[j] < 48)
			{
				printf("Error\n");
				return (1);
			}
			if (argv[i] == "")
			{
				printf("0\n");
				break;
			}

			sum += atoi(str);
			str++;
		}
	}

	printf("%d\n", sum);

	return (0);
}
