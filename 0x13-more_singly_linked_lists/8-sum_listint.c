#include "lists.h"

/**
 * sum_listint - that returns the sum of all the data (n) of
 * a linked list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
