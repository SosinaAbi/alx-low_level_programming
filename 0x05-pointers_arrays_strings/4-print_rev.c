#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: character parameter
 */

void print_rev(char *s)
{
	int count, i;

	count = 0;
	i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	while (count < 1)
	{
		_putchar(s[count - 1]);
		count--;
	}

	_putchar('\n');
}
