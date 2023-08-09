#include"main.h"
/**
 * free_grid - free memory for alloc_grid and any 2-D array
 * @grid: 2-D array to be freed
 * @height: rows to free
 */
void free_grid(int **grid, int height)
{
	int deall;

	for (deall = 0; deall < height; deall++)
		free(grid[deall]);
	free(grid);
}
