#include "main.h"
/**
 * _abs - absolute value
 * @n: integer parameter
 * Return: returns positive number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return ((n * (-1)));
	}
	else
		return (n);
}
