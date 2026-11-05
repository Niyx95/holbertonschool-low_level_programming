#include <stdio.h>
/**
 * row_sum - total of rows function
 * @row: - numbers of rows
 * @cols: - numbers of columns
 *
 * Return: the sum of of rows
 */
int row_sum(int row, int cols)
{
	int c;
	int sum = 0;

	for (c = 1; c <= cols; c++)
		sum += row * c;

	return sum;
}
/**
 * total_sum - sum of total
 * @rows: - numbers of rows
 * @cols: - number of cols
 *
 * Return: the total of the computation
 */
int total_sum(int rows, int cols)
{
	int r;
	int total = 0;
	int current = 0;

	for (r = 1; r <= rows; r++)
	{
		current += row_sum(r, cols);
		total += current;
	}

	return current;
}
/**
 * main - Entry point
 *
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	printf("%d\n", total_sum(3, 3));
	return 0;
}
