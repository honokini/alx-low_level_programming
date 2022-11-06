#include "lists.h"

/**
 * list_len - Finds the number of the elements in
 *            a linked list_t list.
 * @h: The number of elements in h.
 * Return: The linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
