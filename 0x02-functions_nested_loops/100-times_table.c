#include "main.h"
/**
 * print_times_table - prints nxn times table
 * @n: integer parameter
 */
void print_times_table(int n)
{
	int i, j, product;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (j = 1; j <= n; j++)
			{
				product = i * j;
				if (n < 10)
				{
					if (product < 10)
					{
						_putchar(' ');
						_putchar(product + '0');
					}
					else
					{
						_putchar((product / 10) + '0');
						_putchar((product % 10) + '0');
					}
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
