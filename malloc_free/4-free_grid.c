#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_grid - free alloc_grid memory
 * @grid: - grid to free
 * @height: - height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
