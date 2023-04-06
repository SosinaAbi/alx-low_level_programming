#include "main.h"
/**
 * _strlen_recursion - Find the length of\
 * string s.
 * @s: String parameter.
 *
 * Return: Length of string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * check_palindrome - checks if the given string is
 * palindrome or not.
 * @x: starting point of string.
 * @y: Ending point of string.
 * @s: String parameter to be checked.
 *
 * Return: 1 if the string is palindrome
 * 0 if not.
 */

int check_palindrome(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 1)
			return (1);
		return (0 + check_palindrome(s, x + 1, y - 1));
	}
	return (0);
}
/**
 * is_palindrome - Checks if a string is
 * palindrome or not.
 * @s: String to be checked.
 *
 * Return: 1 if the string is palindrome
 * or 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}
