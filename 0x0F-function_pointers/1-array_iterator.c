#include "function_pointers.h"

/**
 * array_iterator - executes a function passed as an argument on
 *                  on each element of an array
 * @array: The given array of integers
 * @size: size of the array
 * @action: pointer to the function executed on element of the array
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;


	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
