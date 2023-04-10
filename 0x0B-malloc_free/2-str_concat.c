#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates string 1
 * and string 2.
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Returns the concatenated
 * result.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len1 = 0, len2 = 0, len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	len = len1 + len2;
	concat = (char *)malloc((len * sizeof(char)) + 1);

	if (concat == NULL)
		return (NULL);

	while (i < len)
	{
		if (i <= len1)
		{
			concat[i] = s1[i];
		}
		if (i >= len1)
		{
			concat[i] = s2[j];
			j++;
		}
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
