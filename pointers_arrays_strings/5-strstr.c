#include "main.h"
#include <stddef.h>
/**
 * *_strstr - 
 *@haystack: - string to check
 *@needle: - substring to find first occurance
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (haystack[i + j] == needle[j])
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
