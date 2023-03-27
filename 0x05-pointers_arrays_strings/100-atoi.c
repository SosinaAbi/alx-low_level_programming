#include "main.h"

/**
 * _atoi - prints numbers from character array
 * @s: character array
 * Return: integer
 */

int _atoi(char *s)
{
	int pos, neg;
	int count, i, j;
	int num;

	pos = 0;
	neg = 0;
	count = 0;
	i = 0;
	j = 0;
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
	{
		num[j] = '-';
		j++;
	}
	for (i = 0; i < count; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num[j] = s[i];
			j++;
		}
	}
	return (num);
}
