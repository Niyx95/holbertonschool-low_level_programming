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
	int row;

	c = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (c < size)
	{
		row = 0;
		while (size > row)
		{
			_putchar('#');
			row++;
		}
		_putchar('\n');
		c++;
	}
}
