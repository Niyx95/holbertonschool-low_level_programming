#include <stdio.h>
/**
 * sum_to_n - function that computes the sum of an integer
 * @n: number to enumerate
 *
 *
 * Return: always 0 (Success)
 */
int sum_to_n(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i <= n; i++)
	sum += i;

	return (sum);
}
/**
 * main - Entry point
 *
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	printf("%d\n", sum_to_n(10));
	return (0);
}
