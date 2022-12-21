#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: integer a
 * @b: integer b
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
