#include "main.h"

/**
 * _strspn - Checks if characters in accept exist in s.
 * @s: First string.
 * @accept: String to be checked.
 * Return: Returns number of characters match.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
