#include "main.h"
/**
 * *leet - decore to 1337
 *@chr: - char to check
 *
 * Return: char
 */
char *leet(char *chr)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	int i;
	int j;

	i = 0;

	while (chr[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (chr[i] == letters[j])
			{
				chr[i] = numbers[j];
			}
			j++;
		}
		i++;
	}
	return (chr);
}
