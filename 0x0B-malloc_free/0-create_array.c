#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with
 *                specific char.
 * @size: the size of the array created
 * @c: character for the array created
 *
 * Return: NULL if size is zero or fails.
 *         Otherwise, a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = (char *) malloc(sizeof(char) * size);
	if (array == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	array[i] = '\0';

	return (array);
}
