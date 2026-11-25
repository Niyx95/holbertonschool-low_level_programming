#include "function_pointers.h"
/**
 * int_index - search for an int
 * @array: array of integers
 * @size: size of the array
 * @cmp: fucntion call variable
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
	{
		return (-1);
	}

	i = 0;

	while (i < size)
	{
		result = (*cmp)(*array);
		if (result != 0)
		{
			return (i);

		}
		array++;
		i++;
	}
	return (-1);
}
