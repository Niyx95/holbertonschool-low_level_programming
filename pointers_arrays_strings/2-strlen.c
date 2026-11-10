#include "main.h"
/**
 * _strlen - return the len of a string
 *@s: - char to check
 *
 * Return: int
 */
int _strlen(char *s)
{
	int store;

	store = 0;

	while (*s != '\0')
	{
		s++;
		store++;
	}
	return (store);
}
