#include "lists.h"

/**
 * list_len - that returns the number of elements in a list.
 * @h: singly linked list.
 * Return: the number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t list;

	list = 0;
	while (h != NULL)
	{
		h = h->next;
		list++;
	}
	return (list);
}
