#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * string_is_empty - check if string is empty
 * @s: - sting to check
 *
 * Return: char pointer
 */
char *string_is_empty(char *s)
{
	if (s == NULL)
	{
		return ("");
	}
	return (s);
}
/**
 * string_length - check len of string
 * @str: sting to checl
 *
 * Return: unsigned int pointer
 */
unsigned int string_length(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * *string_nconcat - concatenate a sting into new memory
 * @s1: - pointer to return in new memory
 * @s2: - string to pass as argument
 * @n: - n of bytes
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *s, *ss;
	char *ptr;

	/*check string if empty*/
	s = string_is_empty(s1);
	ss = string_is_empty(s2);
	/*check length of string*/
	len1 = string_length(s);
	len2 = string_length(ss);

	if (n >= len2)
	{
		n = len2;
	}
	ptr = malloc((len1 + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		ptr[i] = ss[j];
		i++;
		j++;
	}
	return (ptr);
}
