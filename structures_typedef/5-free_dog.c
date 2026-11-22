#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - frees a successfull dog istance
 * dog_t - pointer to a struct dog
 * d: - variable to check
 *
 * Return: void (nothing)
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
