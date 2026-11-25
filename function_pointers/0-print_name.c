#include "function_pointers.h"
/**
 * print_name - function that print a name passes by a function pointer
 * @name: name to print
 * @f: fuction to call
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
