#include <stdio.h>
/**
 * main - prints text witout using printf and puts
 * Return: 1 (Success)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(quote, sizeof(quote) - 1, 1, stdout);
	return (1);
}
