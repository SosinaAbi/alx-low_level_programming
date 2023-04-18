#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees two dimensional grid.
 * @grid: Two dimensional array.
 * @height: Height of the array.
 *
 * Return: None.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
