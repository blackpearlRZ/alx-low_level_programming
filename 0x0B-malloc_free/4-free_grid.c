#include <stdlib.h>
/**
 * free_grid -a function that freesa 2 dimensional
 * grid previously created by my alloc_grid function.
 * @grid: grid tobe freed
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
