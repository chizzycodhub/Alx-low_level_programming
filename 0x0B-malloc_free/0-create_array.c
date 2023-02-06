#include "main.h"

/**
 * create_array - A function that creates an array of chars and
 *                initializes it with a specific char
 *
 * @size: size of the array
 * @c: character to fill the array created as elements
 *
 * Return: A pointer to the array on success
 *         Otherwise NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ptrarr;
	unsigned int i;

	ptrarr = malloc(size * sizeof(char));
	if (ptrarr == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ptrarr[i] = c;

	return (ptrarr);
}
