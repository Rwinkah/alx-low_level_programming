#include "lists.h"

/**
 * free_listint2 - free a node
 *
 * @head: beginning of the list
 *
 * Return: void
 **/


void free_listint2(listint_t **head)
{
	listint_t *clear;
	if (!head)
	{
		return;
	}
	while (*head)
	{
		clear = (*head)->next;
		free(*head);
		*head = clear;
	}
	*head = NULL;
}
