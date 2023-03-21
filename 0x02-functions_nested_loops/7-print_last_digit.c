#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: integer parameter
 * Return: returns last digit of number
 */
int print_last_digit(int n)
{
	_putchar(('0') + ((_abs(n)) % 10));
	return ((_abs(n)) % 10);
}
