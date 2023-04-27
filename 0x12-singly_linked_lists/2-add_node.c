#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds new node in the beginning
 * @head: Pointer to the beginning of nodes.
 * @str: New string node to be added.
 *
 * Return: New node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int n = 0;

	while (str[n])
		n++;

	add = malloc(sizeof(list_t));

	if (!add)
		return (NULL);

	add->str = strdup(str);
	add->len = len;
	add->next = (*head);

	(*head) = add;

	return (*head);
}
