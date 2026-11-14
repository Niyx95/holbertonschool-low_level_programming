#include "main.h"
/**
 * *_strncpy - function that copies a string
 *@dest: - destionation
 *@src: - string to cpy
 *@n: - int
 *
 * Return: char (characher)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (j < n)
	{
		dest[i] = '\0';
		j++;
	}
	return (dest);
}
