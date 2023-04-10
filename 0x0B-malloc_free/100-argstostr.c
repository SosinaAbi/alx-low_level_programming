#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Convert arguments into string.
 * @ac: Number of arguments.
 * @av: Argument vector.
 * Return: Returns string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, x, s;
	char *str;

	i = 0, j = 0, x = 0, s = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			s++;
			j++;
		}
		j = 0;
		i++;
	}
	str = malloc((s * sizeof(char)) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			x++;
			j++;
		}
		str[x] = '\0';
		j = 0;
		x++;
		i++;
	}
	x++;
	str[x] = '\0';
	return (str);
}
