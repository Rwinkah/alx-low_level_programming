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

	if (!new)
	{
   		return (NULL);
	}

	new->n = num;

	if (idx == 0)
	{
    		new->next = temp;
    		new->prev = NULL;
    		if (temp != NULL)
    		{
        		temp->prev = new;
    		}
    	*h = new;
    	return new;
	}

	while (temp != NULL && n < (idx - 1))
	{
		temp = temp->next;
		n++;
	}

	if (temp == NULL)
	{
		free(new);
		return NULL;
	}

	new->next = temp->next;
	new->prev = temp;
	if (temp->next != NULL)
	{
	temp->next->prev = new;
	}
	temp->next = new;

	return new;
}
