#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
 * print_strings - prints a set of string and separator
 * @separator: separator to print
 * @n: nuber of strings passed
 *
 * Return: void (nothing)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	i = 0;
	while (i < n)
	{
		str = va_arg(list, char*);
		if (separator != NULL && i != 0)
		{
			printf("%s", separator);
		}
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
