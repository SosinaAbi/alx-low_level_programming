#include "main.h"

/**
 * _atoi - prints numbers from character array
 * @s: character array
 * Return: integer
 */

int _atoi(char *s)
{
	int count;
	unsigned int num;
	int min = 1;
	int isi = 0;

	count = 0;
	num = 0;

	while (s[count])
	{
		if (s[count] == 45)
		{
			min *= -1;
		}
		while (s[count] >= 48 && s[count] <= 57)
		{
			isi = 1;
			num = (num * 10) + (s[count] - '0');
			count++;
		}
		if (isi == 1)
		{
			break;
		}
		count++;
	}
	num *= min;
	return (num);
}
