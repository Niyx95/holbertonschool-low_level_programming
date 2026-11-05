#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 *
 * Return: always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int lines;

	for (lines = 0; lines <= 9; lines++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
