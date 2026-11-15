#include "main.h"
#include <stddef.h>
/**
 * *_strchr - locate a char in a string
 *@s: - string to check
 *@c: - check for char
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		if (c == '\0')
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
