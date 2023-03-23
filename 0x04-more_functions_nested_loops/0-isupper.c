#include "main.h"

/**
 * _isupper - checks if a letter is upper case
 * @c: integer parameter
 * Return: 1 if true or 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
