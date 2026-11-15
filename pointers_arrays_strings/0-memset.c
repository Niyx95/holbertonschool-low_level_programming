#include "main.h"
/**
 * *_memset - fills memory with a constant
 *@s: - prt to memory
 *@b: - const byte
 *@n: - filler int byte
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
