#include "main.h"
/**
 * _islower - Tells small or capital letters
 * Return: 1 if lower 0 if not
 */
int _islower(int c)
{
	int c;

	if ((c >= 'A') && (c <= 'Z'))
		return (0);
	else
		return (1);
}
