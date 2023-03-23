#include "main.h"

/**
 * print_diagonal - prints \ digonally
 * @n: integer parameter
 * Return: no return value
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else if (j < i)
				{
				_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
