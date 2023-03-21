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
	int sum = 0;

	while (fib < 4000000)
	{
		fib = f2 + f1;
		if ((fib % 2) == 0)
		{
			sum = sum + fib;
		}
		f1 = f2;
		f2 = fib;
	}
	printf("%d\n", sum);
	return (0);
}
