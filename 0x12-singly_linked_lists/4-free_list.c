#include "lists.h"

/**
 * free_list - that frees a list
 * @head: head of the linked list.
 * Return: no.
 */

void free_list(list_t *head)
{
	list_t *last;

	while ((last = head) != NULL)
	{
		head = head->next;
		free(last->str);
		free(last);
	}
}
