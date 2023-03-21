#include "main.h"
/**
 * _islower - Tells small or capital letters
 * Return: 1 if lower 0 if not
 * c: int parameter
 */
int _islower(int c)
{
	int ch;

	if ((ch >= 'A') && (ch <= 'Z'))
		return (0);
	else
		return (1);
}
