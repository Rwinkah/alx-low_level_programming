#include "lists.h"

/**
 * insert_nodeint_at_index - add node at index
 * @head: head
 * @idx: index of new position
 * @n: integer
 *
 * Return: pointer
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *init;
	listint_t  *ptr;

	if (!head && !*head)
		return (NULL);
	ptr = *head;
	if (idx == i)
	{
		init = malloc(sizeof(listint_t));
		if (!init)
			return (NULL);
		init->n = n;
		init->next = *head;
		*head = init;
		return (init);
	}
	else
	{
		while (ptr)
		{
			if (idx - 1 == i)
			{
				init = malloc(sizeof(listint_t));
				if (!init)
					return (NULL);

				init->next = ptr->next;
				init->n = n;
				ptr->next = init;
				return (init);
			}
			i++;
			ptr = ptr->next;
		}
	}
	return (NULL);
}
