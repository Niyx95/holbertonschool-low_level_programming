#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
		putchar('\n');
	}
	return (0);
}
