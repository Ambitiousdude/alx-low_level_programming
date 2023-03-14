#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2-Dimensional grid
 * previously created
 * @grid: pointer to 2-Dimensional array
 * @height: number of rows in grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
