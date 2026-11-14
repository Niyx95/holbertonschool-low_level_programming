#include "main.h"
/**
 * *cap_string - capitalize each word
 *@st: - string to check
 *
 * Return: char (charachter)
 */
char *cap_string(char *st)
{
	int i;

	i = 0;

	while (st[i] != '\0')
	{
		if (i == 0 || st[i - 1] == ' ' ||  st[i - 1] == ',' ||
				 st[i - 1] == ';' ||  st[i - 1] == '.' ||
				 st[i - 1] == '!' ||  st[i - 1] == '?' ||
				  st[i - 1] == '"' ||  st[i - 1] == '(' ||
				  st[i - 1] == ')' ||  st[i - 1] == '{' ||
				   st[i - 1] == '}' || st[i - 1] == '\n' ||
				   st[i - 1] == '\t')
		{
			if (st[i] >= 'a' && st[i] <= 'z')
				st[i] = st[i] - 32;
		}
		i++;
	}
	return (st);
}
