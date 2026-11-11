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
	int len;

	len = 0;

	while (str[len] % 2 == 0)
	{
		_putchar(str[len]);
		str++;
		len++;
	}
	_putchar('\n');
}
