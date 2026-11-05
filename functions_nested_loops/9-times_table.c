#include "main.h"
/**
 * printint - convert a int to a digit
 * @num: int to convert
 *
 * Return: always 0 (Success)
 */
void printint(int num)
{
	if (num >= 10)
	{
	_putchar((num / 10) + '0');
	}
	_putchar((num % 10) + '0');
	if (num < 10)
	{
	_putchar(' ');		
	}
}
/**
 * times_table - print table 1 to 9 * 2
 *
 *
 * Return: always 0 (Success)
 */
void times_table(void)
{
	int row;
	int column;

	row = 0;

	while (row <= 9)
	{
		column = 0;
		while (column <= 9)
		{
			printint(row * column);
			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			column++;
		}
		row++;
		_putchar('\n');
	}
}
