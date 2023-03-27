#include "main.h"

/**
 * puts_half - prints upper half of character array
 * @str: character parameter
 * Return: void
 */

void puts_half(char *str)
{
	int count, i;

	count = 0;
	i = 0;

	while (str[i++])
	{
		count++;
	}

	if (count % 2 != 0)
	{
		for (i = (count - 1) / 2; i < count; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = count / 2; i < count; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
