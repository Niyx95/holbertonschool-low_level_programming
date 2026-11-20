#include <stddef.h>
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - function that print a struct of a dog
 * @d - pointer to a dog struct
 *
 * Return: nothing (void)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d -> name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d -> owner == NULL)
	{
		printf("(Name: nil)\n");
	}
}
