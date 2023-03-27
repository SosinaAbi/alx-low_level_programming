#include "main.h"

/**
 * *_strcpy - copies one array int another
 * @dest: destination array
 * @src: source array
 *
 * Return: destination array
 */

char *_strcpy(char *dest, char *src)
{
	int count, i;

	count = 0;
	i = 0;

	while (dest[i++])
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
