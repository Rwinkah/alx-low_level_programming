#include "lists.h"



void free_dlistint(dlistint_t *head)
{
	dlistint_t *freememory;
	while(head->prev)
		head = head->prev;

	while (head != NULL)
	{
		freememory = head->next;
		free(head);
		head = freememory;
	}
}
