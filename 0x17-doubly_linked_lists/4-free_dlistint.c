#include "lists.h"



void free_dlistint(dlistint_t *head)
{
	dlistint_t *freememory;

	if (head == NULL)
		return;


	while (head != NULL)
	{
		freememory = head->next;
		free(head);
		head = freememory;
	}
	if (head)
		free(head);
	if (freememory)	
		free(freememory);
}
