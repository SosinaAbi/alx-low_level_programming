#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Copies string str to new string.
 * @str: Existing string.
 *
 * Return: returns pointer to new string.
 */

char *_strdup(char *str)
{
	int i = 0, len = 1;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr = (char *)malloc((len * sizeof(char)) + 1);

	if (ptr == NULL)
		return (NULL);


	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}

	ptr[i] = '\0';
	return (ptr);
}
