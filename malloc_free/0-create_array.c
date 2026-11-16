#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *create_array - create an array of chars
 *@size: - unsigned int
 *@c: - init char
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(c));

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (size > i)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
