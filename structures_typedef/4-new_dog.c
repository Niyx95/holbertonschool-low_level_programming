#include "dog.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * @new_dog: - print a new dog instance
 * @name: - name of new dog
 * @age: - age of new dog
 * @owner: - owner of new dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		return (NULL);
	}
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;
	//duplicate strs need to be stored in new allocated memory
	memcpy(&name, &owner, sizeof(doggy));	
	return (doggy);
}
