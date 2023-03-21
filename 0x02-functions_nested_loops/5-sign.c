#include "main.c"
/**
 * print_sign - it prints sign of number
 * @n: integer parameter
 * Return: 1 positive,0 if zero, & -1 to neg
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
