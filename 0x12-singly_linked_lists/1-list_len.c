#include "lists.h"

/**
 * list_len - a function that  returns the number of elements
 *            in a linked list_t list
 * @h: a pointer to a linked list called list_t
 *
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t element_num = 0;

	while (h)
	{
		h = h->next;
		element_num++;
	}
	return (element_num);
}
