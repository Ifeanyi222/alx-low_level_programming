#include "lists.h"

/**
 * get_nodeint_at_index - that returns the nth node of a linked list
 *
 * Return: the nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index && head != NULL; a++)
	{
		head = head->next;
	}

	return (head);
}
Footer

