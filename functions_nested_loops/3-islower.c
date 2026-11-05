#include "main.h"
/**
 * _islower - function that check if char is lowercase
 * @c:  char to check
 *
 * Return: 1 if lower else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
