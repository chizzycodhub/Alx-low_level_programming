#include "function_pointers.h"

/**
 * print_name -  prints a name
 * @name: The name of the person
 * @f: a pointer to a function that prints name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
