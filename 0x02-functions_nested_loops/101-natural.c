#include  <stdio.h>
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i, sum;
	sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3) == 0)
			sum = sum + i;
		else
			continue;

	}
	printf("%d\n", sum);
	return (0);
}
