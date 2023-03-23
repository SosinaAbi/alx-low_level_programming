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
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
