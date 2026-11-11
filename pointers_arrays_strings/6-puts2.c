#include "main.h"
/**
 * puts2 - func that print every 2 char
 *@str: - string to check
 *
 *
 * Return: void (nothing)
 */
void puts2(char *str)
{
	int n;

	n = 0;
	
	if (str[n] == '\0')
	{
		_putchar('\n');
	}

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n += 2;
	}
	_putchar('\n');
}
