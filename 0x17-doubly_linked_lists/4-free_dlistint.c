#include "lists.h"

/**
 * free_dlistint - free all nodes in a doubly linked list
 *
 * @head: head of the list
 *
 * Return: void
 **/

void _free_dlistint(dlistint_t *list)
{
	if (list)
	{
		_free_dlistint(list->next);
		free(list);
	}
}
