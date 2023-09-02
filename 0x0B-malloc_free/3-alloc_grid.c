#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - create a 2d integer grid using malloc.
* @width: int size width
* @height: int size height
* Return: Pointer to new grid, otherwise Null if failed
*/

int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = malloc(height * sizeof(*g));
	if (g == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(**g));
		if (g[i] == NULL)
		{
			for (; i >= 0; i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}
	return (g);
}
