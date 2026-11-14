#include "main.h"
/**
 * reverse_array - reverse and array of ints
 *@a: int to check
 *@n: int to check
 *
 * Return: void (nothing)
 */
void reverse_array(int *a, int n)
{
	int rev;
	int j;
	int tmp;

	rev = n - 1;
	j = 0;

	while (j < rev)
	{
		tmp = a[j];
		a[j] = a[rev];
		a[rev] = tmp;
		rev--;
		j++;
	}
}
