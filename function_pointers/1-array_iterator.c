#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterate trougth an array
 * @array: array to iterate trough
 * @size: - size of the array
 * @action: - func itself
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	while (i < size)
	{
		(*action)(*array);
		array++;
		i++;
	}

}

