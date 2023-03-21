#include "main.h"
#define MAXSTRING 10
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; i < MAXSTRING; i++)
	{
		if (ch[i] == '\n')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);			
}
