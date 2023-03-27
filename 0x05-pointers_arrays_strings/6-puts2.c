#include "main.h"

/**
 * puts2 - prints every other character
 * @str: character parameter
 * Return: void
 */

void puts2(char *str)
{
	int count, i;

	count = 0;
	i = 0;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	if (count > 0)
	{
		for (i = 0; i <= (count - 1) / 2; i++)
		{
			_putchar(str[2 * i]);
		}

	}
	_putchar('\n');
}
