#include "main.h"
/**
 * print_square - print a square of char
 *@size: - size to check
 *
 * Return: void
 */
void print_square(int size)
{

	int c;
	int column;

	c = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (c < size)
	{
		column = 0;
		while (size > column)
		{
			_putchar('#');
			column++;
		}
		_putchar('\n');
		c++;
	}
}
