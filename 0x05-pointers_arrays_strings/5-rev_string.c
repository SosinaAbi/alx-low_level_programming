#include "main.h"

/**
 * rev_string - reverses the character array
 * @s: character parameter
 */

void rev_string(char *s)
{
	int count, i, j;

	count = 0;
	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	char h[count];

	h[count] = s[count];
	j = count - 1;
	i = 0;

	while (j >= 0)
	{
		s[i] = h[j];
		i++;
		j--;
	}

}
