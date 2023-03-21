#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints natural numbers
 * @n: integer parameter
 * Return: no return
 */
void print_to_98(int n)
{
	int x = 0;

	if (n < 98)
	{
		for (x = n; x < 98; x++)
		{
			printf("%d, ", x);
		}
		if (x == 98)
			printf("%d\n", x);
	}
	else if (n == 98)
		printf("%d\n", n);
	else
	{
		for (x = n; x > 98; x--)
			printf("%d, ", x);
		if (x == 98)
			printf("%d\n", x);
	}
}
