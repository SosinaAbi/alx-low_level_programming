#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime factor of a number
 * Return: 0 (Success)
 */

int main(void)
{
	long x, max_p_f;

	long y = 612852475143;
	double squarer = sqrt(y);

	for (x = 1; x <= squarer; x++)
	{
		if (y % x == 0)
		{
			max_p_f = y / x;
		}
	}
	printf("%ld\n", max_p_f);
	return (0);
}
