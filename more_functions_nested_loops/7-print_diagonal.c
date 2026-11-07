#include "main.h"
/**
 * print_diagonal - print a int diagonally
 * @n: int to check
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int c;
	int space;

	c = 0;

	while (c < n)
	{
		space = 0;
		while (space < c)
		{
			_putchar(' ');
			space++;
		}
	_putchar('\\');
	_putchar('\n');
	c++;
	}

}
