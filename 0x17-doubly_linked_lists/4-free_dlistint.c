#include "lists.h"

/**
 * free_dlistint - free all nodes in a doubly linked list
 *
 * @head: head of the list
 *
 * Return: void
 **/

void free_dlistint(dlistint_t *list)
{
	dlistint_t *del;

	if (list == NULL)
		return;


	del = list->next;	
	while (del != NULL)
	{
		free(list);
		list = del;
		del = del->next;
	}
	free(list);

}
