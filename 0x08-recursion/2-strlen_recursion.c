#include "main.h"

/**
 * _strlen_recursion - Returns string length.
 * @s: String parameter.
 *
 * Return: Returns string length.
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (0);
	}
	n++;
	s++;
	_strlen_recursion(s);
	return (n + 1);
}
