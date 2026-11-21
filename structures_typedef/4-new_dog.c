#include "dog.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * string_len - gets the len of string
 * @str: - string to check
 *
 * Return: int
 */
int string_len(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * make_copy - make a copy of given arg
 * @arg: - agrument passed in
 *
 * Return: - char to a pointer
 */
char *make_copy(char *arg)
{
	int i, j;
	char *copy;

	i = 0;
	j = string_len(arg);
	copy = malloc(j + 1);

	if (copy == NULL)
	{
		return (NULL);
	}
	while (arg[i] != '\0')
	{
		copy[i] = arg[i];
		i++;
	}
	copy[i] = '\0';
	return(copy);
}
/**
 * new_dog - print a new dog instance
 * @name: - name of new dog
 * @age: - age of new dog
 * @owner: - owner of new dog
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		return (NULL);
	}
	doggy->name = make_copy(name);
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->age = age;

	doggy->owner = make_copy(owner);
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	return (doggy);
}
