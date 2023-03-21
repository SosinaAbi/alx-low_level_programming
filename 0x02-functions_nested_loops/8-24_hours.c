#include "main.h"
/**
 * jack_bauer - prints every minute
 * Return: no return
 */
void jack_bauer(void)
{
	int z = 0;
	int x, y;

	for (y = 0; y < 24; y++)
	{
		for (x = 0; x < 60; x++)
		{
			z++;
		}
	}

	_putchar('0' + z);
}
