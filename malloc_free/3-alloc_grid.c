#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * **alloc_grid - create a grid of ints
 * @width: - width of grid
 * @height: - height of grid
 *
 * Return: int pointer to pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
