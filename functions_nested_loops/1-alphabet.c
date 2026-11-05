#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase, then a newline
 *
 *
 * Return: 0 alwyas (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
