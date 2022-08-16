#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *point;
	listint_t *temp;

	(void)temp;

	point = malloc(sizeof(listint_t));

	if (point == NULL)
		return (NULL);

	point->n = n;
	point->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = point;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = point;
	}

	return (*head);
}
