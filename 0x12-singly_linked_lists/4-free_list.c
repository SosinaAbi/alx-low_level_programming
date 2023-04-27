#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: List to be freed.
 */

void free_list(list_t *head)
{
	list_t *free_l;

	while (head)
	{
		free_l = head->next;
		free(head->str);
		free(head);

		head = free_l;
	}
}

