#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds new node at the end.
 * @head: Beginning of node pointer.
 * @str: New string node to be added.
 *
 * Return: Pointer to the newly added node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *added;
	list_t *mid = *head;
	unsigned int n = 0;

	while (str[n])
		n++;

	added = malloc(sizeof(list_t));

	if (!added)
		return (NULL);

	added->str = strdup(str);
	added->len = n;
	added->next = NULL;

	if (*head == NULL)
	{
		*head = added;
		return (added);
	}

	while (mid->next)
		mid = mid->next;
	mid->next = added;

	return (added);
}
