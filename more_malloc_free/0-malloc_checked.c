#include <stddef.h>
#include <stdlib.h>
/**
 * *malloc_checked - check memory allocated
 * @b: - usigned int to check
 *
 * Return: nothing (void)
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
