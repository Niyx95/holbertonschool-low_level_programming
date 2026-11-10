#include "main.h"
/**
 * swap_int - pointers to swap
 *@a: - int to swap
 *@b: - int to swap
 *
 * Return: void (nothing)
 */
void swap_int(int *a, int *b)
{
	int store;

	store = *a;
	*a = *b;
	*b = store;

}
