#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function for initialzing a dog struct
 * @d: - pointer to dog struct
 * @name: - name of the dog
 * @age: - age of the dog
 * @owner: - owner of the dog
 *
 * Return: nothing (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
