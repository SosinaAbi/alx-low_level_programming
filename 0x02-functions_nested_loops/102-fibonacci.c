#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{
	int f1 = 1;
	int f2 = 1;
	int fib = 0;
	int n;

	printf("%d, %d, ", f1, f2);
	for (n = 3; n <= 50; n++)
	{
		fib = f2 + f1;
		printf("%d, ", fib);

		f1 = f2;
		f2 = fib;
	}
	printf("\n");
	return (0);
}
