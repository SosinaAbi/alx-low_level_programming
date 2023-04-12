#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * string_nconcat - Concatenates string
 * s1 and s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: number of characters for s2,
 * if n > len(s2) concatenate entire
 * characters of s2.
 *
 * Return: Returns pointer to concatenated
 * string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (j < n)
		len = i + j;
	else
		len = i + n;
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		str[j] = s2[i];
		i++;
		j++;
	}

	str[j] = '\0';
	return (str);
}
