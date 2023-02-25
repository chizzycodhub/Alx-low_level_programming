#include "main.h"

/**
 * array_range - creates an array of integer
 *
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: A pointer to the newly created array
 *         Otherwise NULL, if it fails or min > max.
 */
int *array_range(int min, int max)
{
	int *array;
	int size = 0, index;

	if (min > max)
		return (NULL);

	for (index = min; index <= max; index++)
		size++;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
