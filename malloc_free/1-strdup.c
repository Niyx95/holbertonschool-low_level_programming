#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *_strdup - return a address of the copied str
 *@str: - string to copy into new memory
 *
 * Return: char
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *ptr;

	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[i] = '\0';
	return (ptr);

}

