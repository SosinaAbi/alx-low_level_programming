#include "main.h"

/**
 * _atoi - prints numbers from character array
 * @s: character array
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int pos, neg;
	int count, i;

	pos = 0;
	neg = 0;
	count = 0;
	i = 0;

	while (s[i++])
		count++;

	for (i = 0; i < count; i++)
	{
		if (s[i] == '+')
			pos++;
		else if (s[i] == '-')
			neg++;
	}

	if (neg > pos)
		_putchar('-');
	for (i = 0; i < count; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			_putchar(s[i]);
		else
			continue;
	}
	_putchar('\n');
}
