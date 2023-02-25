#include "main.h"

/**
 * _calloc - allocates memory for an array of a certain number
 *           of elements each of an inputted byte size using malloc.
 *
 * @nmemb: Number of elements in the array
 * @size: size in bytes of each element
 *
 * Return: A pointer to the allocated memory
 *         Otherwise NULL, if it fails or nmemb = 0, size = 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	filler = ptr;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (ptr);
}
