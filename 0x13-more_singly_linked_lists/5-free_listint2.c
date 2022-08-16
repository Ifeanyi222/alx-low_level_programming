#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *point;
	listint_t *bug;

	if (head != NULL)
	{
		bug = *head;
		while ((point = bug) != NULL)
		{
			bug = bug->next;
			free(point);
		}
		*head = NULL;
	}
}
