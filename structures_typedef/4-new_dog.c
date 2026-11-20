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
 * new_dog - print a new dog instance
 * @name: - name of new dog
 * @age: - age of new dog
 * @owner: - owner of new dog
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	int tmp;
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		return (NULL);
	}
	/*get len, alloc len + null, copy*/
	i = string_len(name);
	doggy->name = malloc(i + 1);
	if (doggy->name == NULL)
	{
		free(doggy->name);
	}
	tmp = 0;
	while (name[tmp] != '\0')
	{
		doggy->name[tmp] = name[tmp];
		tmp++;
	}
	doggy->name[tmp] = '\0';
	doggy->age = age;
	/*get len, alloc len + '\0', copy*/
	j = string_len(owner);
	doggy->owner = malloc(j + 1);
	if (doggy->owner == NULL)
	{
		free(doggy->owner);
	}
	tmp = 0;
	while (owner[tmp] != '\0')
	{
		doggy->owner[tmp] = owner[tmp];
		tmp++;
	}
	doggy->owner[tmp] = '\0';
	return (doggy);
}
