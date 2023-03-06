#include "lists.h"



void free_dlistint(dlistint_t *head)
{
	dlistint_t *freememory;

	while (head != NULL)
	{
		freememory = head->next;
		free(head);
		head = freememory;
	}
}
