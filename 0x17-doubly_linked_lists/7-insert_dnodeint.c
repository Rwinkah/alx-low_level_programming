#include "lists.h"

/**
 * insert_dnodeint_at_index - get node at index
 *
 * @h: begining of the list
 * @idx: index of the element
 * @num: value of the node
 *
 * Return: dlistint_t
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int num)
{
	dlistint_t *temp = *h;
	unsigned int n = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	while (temp->prev != NULL)
		temp = temp->prev;

	if ((!temp) || (!new))
	{
		return (NULL);
	}

	new->n = num;
	if (idx == 0)
	{
		new->next = temp->next;
		temp->next = new;
		return new;
	}

	for (n = 0; n < (idx - 1) ; n++)
	{
		if (temp->next != NULL)
			temp = temp->next;
		else
			return NULL;
	}

	new->next = temp->next;
	temp->next = new;
	return (new);
}
