#include "main.h"

/**
 * _realloc - reallocate a memory block
 *
 * @old_size: previously allocated memory size in bytes
 * @new_size: new allocated memory size in bytes
 * @ptr: pointer to the previously allocated memory
 *
 * Return: A pointer to the new allocated memory block.
 *         If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newMemory;
	char *ptr_copy, *filler;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newMemory = malloc(new_size);

		if (newMemory == NULL)
			return (NULL);

		return (newMemory);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	newMemory = malloc(sizeof(*ptr_copy) * new_size);

	if (newMemory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = newMemory;

	for (index = 0; index < old_size && index < new_size; index++)
		filler[index] = *ptr_copy++;

	free(ptr);
	return (newMemory);
}
