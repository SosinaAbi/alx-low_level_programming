#include <stdio.h>

/**
 * main - prints fizz, buzz and fizzbuzz for the
 * multiple of 3, 5 and 15 respectively
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for  (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
