#include <stdio.h>
/**
 * main - print numberz using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar('0' + n);
	putchar('\n');

	return (0);
}
