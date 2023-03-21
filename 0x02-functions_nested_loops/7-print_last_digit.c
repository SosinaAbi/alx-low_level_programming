#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: integer parameter
 * Return: returns last digit of number
 */
int print_last_digit(int n)
{
	int x = n % 10;

	_putchar('0' + x);
	return (x);
}
