#include "main.h"
/**
 * _isalpha - check for alphabetic char
 * @c: char to check
 *
 * Return: always 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
