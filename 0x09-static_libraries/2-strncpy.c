#include "main.h"

/**
 * _strncpy - Copies at most inputted number of bytes
 * from source string to destination.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of bytes to be copied from src.
 *
 * Return: A pointer to resulting destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srclen = 0;

	while (src[i++])
	{
		srclen++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = srclen; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
