#include <stdio.h>
#include "main.h"
/**
 * print_array - function that prints all indexes of an array
 *@a: - int to check
 *@n: - int to check
 *
 * Return: void (nothing)
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (n > i)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(" ,");
		}
		i++;
	}
	printf("\n");
}
