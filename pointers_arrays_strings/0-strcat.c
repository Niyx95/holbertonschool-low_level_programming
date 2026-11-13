#include "main.h"
/**
 * *_strcat - append two strings togheder
 *@dest: - destination variable
 *@src - string to append
 *
 * Return: char (characher)
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
