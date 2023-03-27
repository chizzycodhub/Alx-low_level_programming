#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 *
 * @h: pointer to struct node called list_t
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t node_num = 0;


	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node_num++;
	}
	return (node_num);
}
