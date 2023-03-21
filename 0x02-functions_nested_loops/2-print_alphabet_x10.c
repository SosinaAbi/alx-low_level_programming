#include <stdio.h>
/**
 * print_alphabet_x10 - prints letters 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}

		putchar('\n');
		i++;
	}
}
