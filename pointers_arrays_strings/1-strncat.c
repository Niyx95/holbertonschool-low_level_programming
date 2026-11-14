#include "main.h"
/**
 * *_strncat - func that concatenates a string
 *@dest: - dest to return
 *@src: - string to concatenate
 *@n: - int
 *
 * Return: char (character)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	_putchar('\0');
	return (dest);
}
