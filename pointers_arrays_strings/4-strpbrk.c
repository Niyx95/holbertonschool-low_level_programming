#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - return first accurance of s in bytes
 *@s: - string to check
 *@accept: - return pointer in accept
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
