#include "main.h"

/**
 * *string_toupper - Converts lowercase string to uppercase.
 * @str: String to be converted.
 *
 * Return: Converted string.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

		i++;
	}
	return (str);
}
