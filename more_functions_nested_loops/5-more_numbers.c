#include "main.h"
/**
 * more_numbers - func that print rows and columns of numbers
 *
 *
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int column;
	int row;

	row = 0;

	while (row <= 9)
	{
		column = 0;
		n = 0;
		while (column <= 14)
		{
			if (n <= 9)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			column++;
			n++;
		}
		row++;
		_putchar('\n');
	}

}
