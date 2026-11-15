#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of diagonal matrix of a square
 *@a: - square of integers
 *@size: - size of sum
 *
 * Return: void (nothing)
 */
void print_diagsums(int *a, int size)
{
	int row;
	int sum1;
	int sum2;

	row = 0;
	sum1 = 0;
	sum2 = 0;

	while (row < size)
	{
		sum1 += a[row * size + row];
		sum2 += a[row * size + (size - 1 - row)];
		row++;
	}
	printf("%d, %d\n", sum1, sum2);
}
