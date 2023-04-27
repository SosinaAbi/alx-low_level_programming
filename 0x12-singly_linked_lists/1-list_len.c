#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Counts number of elements
 * in linked list_t list.
 * @h: Pointer to the list_t list
 *
 * Return: Returns number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
