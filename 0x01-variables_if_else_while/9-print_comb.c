#include <stdio.h>
/**
 * main - print single digit numbers with comma & space
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
