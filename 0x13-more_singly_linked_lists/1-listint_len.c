#include "lists.h"

/**
 * listint_len - that returns the number of elements in
 * a linked list.
 *
 * Return: the numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t the_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		the_nodes++;
	}
	return (the_nodes);
}
