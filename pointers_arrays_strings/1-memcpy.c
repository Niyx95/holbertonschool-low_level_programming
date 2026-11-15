#include "main.h"
/**
 * *_memcpy - copies bytes from mem to mem
 *@dest: - buffer to copy to
 *@src: - buffer to copy from
 *@n: - bytes to copy
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
