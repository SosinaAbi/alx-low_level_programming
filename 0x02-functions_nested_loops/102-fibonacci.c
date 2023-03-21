#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{
	long int f1 = 1;
	long int f2 = 1;
	long int fib = 0;
	int n;

	printf("%ld, %ld, ", f1, f2);
	for (n = 3; n <= 50; n++)
	{
		fib = f2 + f1;
		printf("%ld, ", fib);

		f1 = f2;
		f2 = fib;
	}
	printf("\n");
	return (0);
}
