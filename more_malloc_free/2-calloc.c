#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *_calloc - deleting the garbage values from memory
 * @nmemb: - memory bytes to allocate
 * @size: - size of the buffer
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;
	ptr = malloc(total);

	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
