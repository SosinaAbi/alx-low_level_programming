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
	int i, j;
	int **twoD;

	twoD = (int **)malloc(width * sizeof(int), height * sizeof(int));

	if (width <= 0 || height <= 0)
		return (NULL);
	if (*twoD == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			twoD[i][j] = 0;
		}
	}
	return (twoD);
}
