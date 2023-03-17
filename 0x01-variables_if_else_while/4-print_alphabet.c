#include <stdio.h>
/**
 * main - print small letters except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch == 'e') || (ch == 'q'))
			continue;
		else
			putchar(ch);
	}

	putchar('\n');
	return (0);
}
