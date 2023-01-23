#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 *
 * @head: begining of the list
 * @index: index of the element
 *
 * Return: dlistint_t
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n = 0;

	if (!temp)
	{
		return (NULL);
	}

	for (n = 0; n < index; n++)
	{
		temp = temp->next;
		if (!temp)
		{
			return (NULL);
		}
	}
	return (temp);
}
