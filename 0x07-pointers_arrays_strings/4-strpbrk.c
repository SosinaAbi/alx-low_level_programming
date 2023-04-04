#include "main.h"

/**
 * _strpbrk - Locates the first occurence in
 * string s of bytes in string accept.
 * @s: First string.
 * @accept: second string
 * Return: Returns pointer of first occurence
 * of strings in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);
}
