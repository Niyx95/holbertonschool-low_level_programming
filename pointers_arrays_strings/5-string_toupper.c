#include "main.h"
/**
 * *string_toupper - convert a string to uppercase
 *@st: - string to check
 *
 * Return: char (charachter)
 */
char *string_toupper(char *st)
{
	int i;

	i = 0;

	while (st[i] != '\0')
	{
		if (st[i] >= 'a' && st[i] <= 'z')
			st[i] = st[i] - 32;
		i++;
	}
	return (st);
}
