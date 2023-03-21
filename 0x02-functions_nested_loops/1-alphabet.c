#include <stdio.h>
/**
 * print_alphabet - print small letters
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	 putchar('\n');
}
