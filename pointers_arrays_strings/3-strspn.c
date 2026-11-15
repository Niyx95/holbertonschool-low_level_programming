#include "main.h"
/**
 * _strspn - calculate the length in bytes
 *@s: - string to check
 *@accept: bytes accpeted
 *
 * Return: unsigned int - 0 or negative
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i;
	int j;
	int found;

	i = 0;
	n = 0;

	while (s[i] != '\0')
	{
		j = 0;
		found = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
			}
			j++;
		}
		if (found == 0)
		{
			return (n);
		}
		i++;
		n++;
	}
	return (i);

}
