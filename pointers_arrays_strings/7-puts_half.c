#include "main.h"
/**
 * puts_half - function that print only half string
 *@str: - string to check
 *
 * Return: void (nothing)
 */
void puts_half(char *str)
{
	int len;
	int start;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	start = (len + 1) / 2;

	while (start < len)
	{
		_putchar(str[start]);
		start++;
	}
	str++;
	_putchar('\n');
}
