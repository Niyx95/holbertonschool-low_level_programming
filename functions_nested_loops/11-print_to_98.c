#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - func that print to 98 and stops
 * @n: int to increment or demcrement
 *
 * Return: alwyas 0 (Success)
 */
void print_to_98(int n)
{
	printf("%d", n);

	while (n < 98)
	{
		n++;
		printf(", %d", n);
	}
	while (n > 98)
	{
		n--;
		printf(", %d", n);
	}
	printf("\n");
}
