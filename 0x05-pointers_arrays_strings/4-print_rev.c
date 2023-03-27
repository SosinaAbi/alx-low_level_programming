#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: character parameter
 */

void print_rev(char *s)
{
	int count, i, j;

	count = 0;
	i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	j = count - 1;

	while (j > 0)
	{
		_putchar(s[j]);
		j--;
	}

	_putchar('\n');
}
