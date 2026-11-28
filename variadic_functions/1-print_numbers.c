#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print all numbers with separator
 * @separator: the char separator
 * @n: nunber of ints passed in
 *
 * Return: void (nothing)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;

	va_list list;

	va_start(list, n);

	i = 0;

	while (i < n)
	{
		num = va_arg(list, unsigned int);
		if (separator != NULL)
		{
			printf("%s", separator);
		}
		if (i == 0)
		{
			printf("%d", num);
		}
		else
		{
			printf("%d", num);
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
