#include "main.h"
/**
 * _islower - Tells small or capital letters
 * Return: 1 if lower 0 if not
 * @c: integer parameter
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
