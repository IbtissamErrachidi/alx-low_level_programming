#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
*free_grid - frees the mem allocate for the grid created by alloc_grid()
*@grid: grid to free
*@height: height of the grid
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

	if (grid == NULL || height == 0)
		return;
}
