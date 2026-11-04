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

	chr = 'z';

	while (chr >= 'a')
	{
		putchar(chr);
		chr--;
	}
	putchar('\n');
	return (0);
}
