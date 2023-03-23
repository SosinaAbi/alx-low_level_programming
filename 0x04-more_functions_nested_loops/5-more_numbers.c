#include "main.h"
#define MAXSTRING 20

/**
 * more_numbers - prints numbers 0 - 14 ten times
 * Return: no return value
 */

void more_numbers(void)
{
	int x, i;
	char ch[] = "01234567891011121314";

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i < MAXSTRING; i++)
		{
			if (ch[i] == '\0')
			{
				_putchar('\n');
				break;
			}
			else
				_putchar(ch[i]);
		}
	}
	_putchar('\n');
}
