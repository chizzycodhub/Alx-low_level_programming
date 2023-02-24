#include "main.h"

/**
 * malloc_checked - A function that uses malloc to allocate memory.
 *
 * @b: The number of bytes to be allocated.
 *
 * Return: if malloc fails, terminates with a status value of 98
 *          Otherwise, a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *space = malloc(b);

	if (space == NULL)
		exit(98);

	return (space);
}
/*void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}*/
