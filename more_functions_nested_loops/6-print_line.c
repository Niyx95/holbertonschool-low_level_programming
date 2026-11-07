#include "main.h"
/**
 * print_line - print a line given by function call
 * @n: - int to check
 *
 *
 * Return: void
 */
void print_line(int n)
{
	int c;

	c = 0;

	while (c < n)
	{
		_putchar('_');
	c++;
	}
	_putchar('\n');

}
