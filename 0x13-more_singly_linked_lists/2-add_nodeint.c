#include "lists.h"

/**
 * add_nodeint - that add a new node at the beginning
 * of a linked list
 *
 * Return: the address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *point;

	point = malloc(sizeof(listint_t));

	if (point == NULL)
		return (NULL);

	point->n = n;
	point->next = *head;
	*head = point;

	return (*head);
}
