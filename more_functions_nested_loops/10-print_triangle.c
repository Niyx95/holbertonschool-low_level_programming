#include "main.h"
/**
 * print_triangle - print a triangle
 *@size: int to check
 *
 * Return: void
 */
void print_triangle(int size)
{
	int space;
	int ch;
	int hash;

	ch = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (ch <= size)
	{
		space = 0;
		while (space < size - ch)
		{
			space++;
			_putchar(' ');
		}

		hash = 0;
		while (hash < ch)
		{
			_putchar('#');
			hash++;
		}
		_putchar('\n');
		ch++;
	}
}
