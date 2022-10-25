#include "lists.h"

/**
 * free_listint - free a node
 *
 * @head: beginning of the list
 *
 * Return: void
 **/


void free_listint(listint_t *head)
{
	if (!head)
	{
		return;
	}
	if (head->next != NULL)
	{
		free_listint(head->next);
	}
	free(head);
}
