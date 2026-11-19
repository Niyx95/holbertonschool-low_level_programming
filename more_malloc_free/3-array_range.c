#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *array_range - create an array of ints
 * @min: - minumin range of array
 * @max: - maximum range of array
 *
 * Return: pointer to an int
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (max - min + 1))
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
