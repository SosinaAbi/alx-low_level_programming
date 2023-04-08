#include "main.h"
/**
 * _isalpha - checks if the character is letter
 * @c: integer parameter
 * Return: 1 if it is letter & 0 if not
 */
int _isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	else
		return (0);
}
