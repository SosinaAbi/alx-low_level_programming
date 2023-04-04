#include "main.h"

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
	int i = 0, n = 0;

	while (s[i++])
		n++;

	for (i = 0; i < n; i++)
	{
		if (c == s[i])
			return (s + i);
	}
	return (NULL);
}
