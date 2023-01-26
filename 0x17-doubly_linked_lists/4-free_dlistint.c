#include "lists.h"



void free_dlistint(dlistint_t *head)
{
	dlistint_t *freememory;

	if (head == NULL)
		return;

	freememory = head->next;

	while (freememory != NULL)
	{
		free(head);
		head = freememory;
		freememory = freememory->next;
	}
	free(head);
	free(freememory);
}
