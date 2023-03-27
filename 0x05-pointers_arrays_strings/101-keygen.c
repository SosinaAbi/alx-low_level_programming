#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - creates valid password for 101-crackme
 * Return: 0 (Success)
 */

int main(void)
{
	char pass[84];
	int i = 0, sum = 0, half1, half2;

	srand(time(0));

	while (sum < 2772)
	{
		pass[i] = 33 + rand() % 94;
		sum += pass[i++];
	}

	pass[i] = '\0';

	if (sum != 2772)
	{
		half1 = (sum - 2772) / 2;
		half2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			half1++;
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + half1))
			{
				pass[i] -= half1;
				break;
			}
		}
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + half2))
			{
				pass[i] -= half2;
				break;
			}
		}
	}
	printf("%s", pass);
	return (0);
}
