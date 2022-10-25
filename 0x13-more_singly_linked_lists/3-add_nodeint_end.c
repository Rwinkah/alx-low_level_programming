#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of the list
 *
 * @head: head of the list
 * @n: int value of the new node
 *
 * Return: pointer
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *ptr = NULL;

	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	else
	{
	temp->n = n;
	temp->next = NULL;
	}
	if (!*head)
	{
		*head = temp;
	}
	else
	{
	ptr = *head;

	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	}

	return (temp);
}
