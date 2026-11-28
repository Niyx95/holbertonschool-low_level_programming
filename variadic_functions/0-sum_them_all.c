#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - return the sum of all arguments
 * @n: unsigned int (const)
 * @...: variadic variable (take in as many as you want)
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, total;

	va_list list;

	va_start(list, n);

	i = 0;
	total = 0;

	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		total += va_arg(list, unsigned int);
		i++;
	}
	va_end(list);
	return (total);
}
