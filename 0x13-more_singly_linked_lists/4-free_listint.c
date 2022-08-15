#include "lists.h"

/**
 * free_listint - that frees a linked list
 *
 * Return: no
 */
void free_listint(listint_t *head)
{
	listint_t *bug;

	while ((bug = head) != NULL)
	{
		head = head->next;
		free(bug);
	}
}
