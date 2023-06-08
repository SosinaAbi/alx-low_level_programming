#include "main.h"
/**
 * _prime - Checks if n is prime or not.
 * @n: Integer number to be checked.
 * @i: Integers to check n.
 *
 * Return: 1 if prime or 0 if not.
 */
int _prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (_prime(n, i + 1));
}

/**
 * is_prime_number - Checks if n is prime
 * number or not.
 * @n: Integer parameter.
 *
 * Return: 1 if n is prime number or
 * 0 if n is not prime number.
 */

int is_prime_number(int n)
{
	return (_prime(n, 1));
}

