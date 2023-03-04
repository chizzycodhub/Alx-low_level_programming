#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees dogs
 *
 * @d: The dog to free
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
