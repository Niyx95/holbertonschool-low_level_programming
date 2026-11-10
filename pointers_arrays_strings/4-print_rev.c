#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: - string to check
 *
 * Return: void (nothing)
 */
void print_rev(char *s)
{
	int length;
	int reverse;

	length = 0;

	while (s[length] != 0)
	{
		length++;
	}

	reverse = length - 1;

	while (reverse >= 0)
	{
		_putchar(s[reverse]);
		reverse--;
	}
	_putchar('\n');
}
