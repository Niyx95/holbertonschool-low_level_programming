#include "main.h"
/**
 * print_numbers - print a integer
 *
 *
 * Return: void (nothing)
 */
void print_numbers(void)
{
	int c;

	c = 0;

	while (c <= 9)
	{
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
