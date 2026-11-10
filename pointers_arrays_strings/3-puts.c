#include "main.h"
/**
 * _puts - prints a string
 *@str: - string to print
 *
 * Return: void (nothing)
 */
void _puts(char *str)
{
	int store;

	store = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		store++;
	}
	_putchar('\n');
}
