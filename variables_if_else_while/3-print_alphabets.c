#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{
	char chr;
	char ch;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
	}
		for (ch = 'A'; ch <= 'Z'; ch++)
		{
			putchar(ch);
		}
	putchar('\n');
	return (0);
}
