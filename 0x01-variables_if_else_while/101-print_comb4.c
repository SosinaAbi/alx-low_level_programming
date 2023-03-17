#include <stdio.h>
/**
 * main - prints three digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x <= 7; x++)
	{
		for (y = x + 1; y <= 8; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				putchar('0' + x);
				putchar('0' + y);
				putchar('0' + z);

				if (x < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
