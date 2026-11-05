#include <stdio.h>
/**
 * print_table - function that print a table of multiplicated integers
 * @size: - size of table wanted as integer
 *
 *
 * void: no return
 */
void print_table(int size)
{
	int row;
	int col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			printf("%d ", row * col);
		}
		printf("\n");
	}
}
/**
 * main - Entry point
 *
 *
 * Return: alwyas 0 (Success)
 */
int main(void)
{
	print_table(4);
	return (0);
}
