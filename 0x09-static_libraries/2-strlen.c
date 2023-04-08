#include "main.h"

/**
 * _strlen - display length of string
 * @s: character array
 * Return: number of characters
 */

int _strlen(char *s)
{
	int count, i;

	count = 0;
	i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
