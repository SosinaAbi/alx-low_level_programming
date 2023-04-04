#include "main.h"

/**
 * _memset - Saves b in s arrays for n bytes.
 * @s: Destination array.
 * @b: Data to be saved in s.
 * @n: Number of bytes for array s.
 *
 * Return: Returns array s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
