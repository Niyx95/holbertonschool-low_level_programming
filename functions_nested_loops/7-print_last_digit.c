#include "main.h"
/**
 * print_last_digit - function that print the last digit
 * @n: int to check
 *
 * Return: always 0 (Success)
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (n < 0)
	{
		last = -last;
	}
	_putchar(last + '0');

	return (last);
}
