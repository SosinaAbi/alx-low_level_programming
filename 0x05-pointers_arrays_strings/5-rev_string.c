#include "main.h"

/**
 * rev_string - reverses the character array
 * @s: character parameter
 */

void rev_string(char *s)
{
	int count, i, j;
	char hold;

	count = 0;
	i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	for (j = count - 1; j >= count / 2; j--)
	{
		hold = s[j];
		s[j] = s[count - j - 1];
		s[count - j - 1] = hold;
	}
}
