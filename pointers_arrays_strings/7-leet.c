#include "main.h"
/**
 * *leet - decore to 1337
 *@chr: - char to check
 *
 * Return: char
 */
char *leet(char *chr)
{
	int i;

	i = 0;

	while (chr[i] != '\0')
	{
		if (chr[i] == 'a' || chr[i] == 'A')
		{
			chr[i] = '4';
		}
		else if (chr[i] == 'e' || chr[i] == 'E')
		{
			chr[i] = '3';
		}
		else if (chr[i] == 'o' || chr[i] == 'O')
		{
			chr[i] = '0';
		}
		else if  (chr[i] == 't' || chr[i] == 'T')
		{
			chr[i] = '7';
		}
		else if (chr[i] == 'l' || chr[i] == 'L')
		{
			chr[i] = '1';
		}
		i++;
	}
	return (chr);
}
