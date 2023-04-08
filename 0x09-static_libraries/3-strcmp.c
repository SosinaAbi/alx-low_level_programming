#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String one.
 * @s2: String two.
 *
 * Return: 0 if string1 == string2, negative
 * difference value if string1 < string2 and
 * positive value if string1 > string2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
