#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Creates two dimensional array.
 * @width: width of an array.
 * @height: height of an array.
 * Return: Returns two dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int i, j, x, y;
	int **twoD;

	twoD = (int *)malloc(height * sizeof(int));

	if (width <= 0 || height <= 0)
		return (NULL);
	if (twoD == NULL)
	{
		free(towD);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		twoD[i] = (int *)malloc(sizeof(int) * width);
		if (twoD[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(twoD[j]);
			}
			free(twoD);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			a[x][y] = 0;
		}
	}
	return (twoD);
}
