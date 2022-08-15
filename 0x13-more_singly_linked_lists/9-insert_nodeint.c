#include "lists.h"

/**
 * insert_nodeint_at_index -that inserts a new node
 * at a given position.
 * @head: head of a list.
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *point;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (a = 0; a < idx - 1 && h != NULL; a++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	point = malloc(sizeof(listint_t));
	if (point == NULL)
		return (NULL);

	point->n = n;

	if (idx == 0)
	{
		point->next = *head;
		*head = point;
	}
	else
	{
		point->next = h->next;
		h->next = point;
	}

	return (point);
}
