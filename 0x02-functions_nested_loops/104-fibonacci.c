#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{
	unsigned long int f1 = 1;
	unsigned long int f2 = 1;
	unsigned long int fib = 0;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2, half1, half2;
	int n;

	printf("%lu, ", f1);
	for (n = 2; n < 93; n++)
	{
		fib = f2 + f1;
		printf("%lu", fib);

		printf(", ");
		f1 = f2;
		f2 = fib;
	}
	fib1_half1 = f1 / 10000000000;
	fib2_half1 = f2 / 10000000000;
	fib1_half2 = f1 % 10000000000;
	fib2_half2 = f2 % 10000000000;
	for (n = 93; n < 99; n++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
	if (fib1_half2 + fib2_half2 > 9999999999)
	{
		half1 += 1;
		half2 %= 10000000000;
	}
	printf("%lu%lu", half1, half2);
	if (n != 98)
		printf(", ");
	fib1_half1 = fib2_half1;
	fib1_half2 = fib2_half2;
	fib2_half1 = half1;
	fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
