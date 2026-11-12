#include "main.h"
/**
 * *_strcpy - copies a string
 *@dest: - destionation buffer
 *@src: - string to copy
 *
 * Return: char (charachter)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
