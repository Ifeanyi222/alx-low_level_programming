#include "lists.h"

/**
 * pop_listint - that deletes the head node of
 * a linked list.
 *
 * Return: head node's data(n).
 */
int pop_listint(listint_t **head)
{
	int the_node;
	listint_t *point;
	listint_t *bug;

	if (*head == NULL)
		return (0);

	bug = *head;

	the_node = bug->n;

	point = bug->next;

	free(bug);

	*head = point;

	return (the_node);
}
