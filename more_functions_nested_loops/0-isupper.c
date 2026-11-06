#include "main.h"
/**
 * _isupper - function that return 1 if uppercase else 0
 * @c: integer to check
 *
 * Return: integer
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
