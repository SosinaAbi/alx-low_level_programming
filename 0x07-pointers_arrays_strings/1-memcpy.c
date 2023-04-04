#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area
 * src to memory area dest.
 * @dest: Destination memory area.
 * @src: Source memory area.
 * @n: Number of bytes.
 *
 * Return: Returns a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
