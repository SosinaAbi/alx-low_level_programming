#include "main.h"

/**
 * _strstr - Finds the first occurence of the
 * substring needle in the string haystack.
 * @haystack: First string.
 * @needle: Second string.
 * Return: returns the maching string.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}
	return (NULL);
}
