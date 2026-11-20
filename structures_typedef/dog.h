#ifndef DOG_H
#define DOG_H
/**
 * struct dog - container for dog attributes
 * @name: - name of dog
 * @age: - age of dog
 * @owner: - owner of the dog
 *
 * Description: this stuct defines a new data structure for a dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}	dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
