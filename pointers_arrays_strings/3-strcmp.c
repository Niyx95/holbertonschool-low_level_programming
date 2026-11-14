#include "main.h"
/**
 * _strcmp - compares two strings
 *@s1: - string n1
 *@s2: - string n2
 *
 * Return: int (integer)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	if (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
