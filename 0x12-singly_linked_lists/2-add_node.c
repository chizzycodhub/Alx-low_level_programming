#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: a pointer to the list_t list
 * @str: string to be added to list_t list
 *
 * Return: If the function fails - NULL
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = 0;
	while (*str)
	{
		new->len++;
		str++;
	}
	new->next = *head;
	*head = new;

	return (new);
}
