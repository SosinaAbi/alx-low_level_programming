#include "main.h"

/**
 * _strncat - concatenates two string using
 * imputted number of bytes from source
 * @dest: Destination character
 * @src: Source string
 * @n: Number of bytes from source
 *
 * Return: returns concatenated string from dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, destlen = 0;

	while (dest[i++])
	{
		destlen++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[destlen++] = src[i];
	}

	return (dest);
}
