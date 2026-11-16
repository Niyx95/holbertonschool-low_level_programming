#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings togheder
 *@s1: - string to concatenate
 *@s2: - string to concatenate
 *
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, y, x;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	y = 0;
	while (y < i)
	{
		ptr[y] = s1[y];
		y++;
	}
	x = 0;
	while (x < j)
	{
		ptr[x + i] = s2[x];
		x++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
