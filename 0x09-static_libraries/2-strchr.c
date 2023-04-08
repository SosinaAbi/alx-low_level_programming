#include "main.h"
#include <stddef.h>

/**
 * _strchr - Checks if character c occurs in s.
 * @s: Character array.
 * @c: Character to be checked.
 *
 * Return: Returns pointer to first occurence of c
 * in the string s, or NULL if c is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
