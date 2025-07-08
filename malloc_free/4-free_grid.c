#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free arraw mallo
 * @grid: raw
 * @height: height raw
 *
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
