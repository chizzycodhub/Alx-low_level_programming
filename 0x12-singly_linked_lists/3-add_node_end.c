#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds anew node at the end of a list_t list
 * @head: pointer to a list_t list
 * @str: The string to be added to the list_t list
 *
 * Return: If the function fails - NULL
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = 0;
	while (*str)
	{
		new->len++;
		str++;
	}

	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

	return (*head);
}
