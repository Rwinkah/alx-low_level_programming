#include "lists.h"

/**
 * sum_dlistint - sum values of a linked list
 *
 * @head: begining of the list
 *
 * Return: int
 **/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int n = 0;

	if (!temp)
	{
		return (0);
	}

	while (temp)
	{
		n += temp->n;
		temp = temp->next;
	}
	return (n);
}
