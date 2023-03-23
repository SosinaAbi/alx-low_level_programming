#include <stdio.h>

/**
 * main - prints largest prime factor of a number
 * Return: 0 (Success)
 */

int main(void)
{
	long x, y;

	x = 612852475143;
	y = x;

	while ((y % 2 == 0) || (y % 3 == 0))
	{
		if (y % 2 == 0)
		{
			y = y / 2;
		}
		else if (y % 3 == 0)
		{
			y = y / 3;
		}
	}

	printf("%ld\n", y);
	return (0);
}
