#include "main.h"
/**
 * times_table - prints 9 times table
 * Return: no return type
 */
void times_table(void)
{
	int x, y;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (x < 9)
			{
				if (x == 0)
					_putchar('0');
				else if ((x * y) < 10)
				{
					_putchar(' ');
					_putchar((x * y) + '0');
				}
				else
				{
					_putchar(((x * y) / 10) + '0');
					_putchar(((x * y) % 10) + '0');
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if ((x * y) < 10)
				{
					_putchar(' ');
					_putchar((y * x) + '0');
				else
				{
					_putchar(((x * y) / 10) + '0');
					_putchar(((x * y) % 10) + '0');
				}

			}
		}
		_putchar('\n');
	}
}
