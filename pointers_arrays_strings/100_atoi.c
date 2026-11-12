#include "main.h"
/**
 * _atoi - function that converts a string into ints
 *@s: - int to check
 *
 * Return: int (integer)
 */
int _atoi(char *s)
{
	int i;
	int symbol;
	int result;
	int seen;

	i = 0;
	symbol = 1;
	result = 0;
	seen = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && seen == 0)
		{
			symbol = symbol * -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			seen = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (seen == 1)
		{
			break;
		}
		i++;
	}
	return (result * symbol);
}
