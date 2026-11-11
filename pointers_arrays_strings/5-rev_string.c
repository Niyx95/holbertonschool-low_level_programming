#include "main.h"
/**
 * rev_string - reverts a string
 *@s: - string to check
 *
 * Return: void (nothing)
 */
void rev_string(char *s)
{
	int len;
	int reverse;
	int tmp;
	int front;

	len = 0;

	while (s[len] != 0)
	{
		len++;
	}

	front = 0;
	reverse = len - 1;

	while (front < reverse)
	{
		tmp = s[front];
		s[front] = s[reverse];
		s[reverse] = tmp;
		front++;
		reverse--;
	}
}
