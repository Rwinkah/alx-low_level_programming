#include "lists.h"

/**
 * print_listint - print all elements of a node list
 * @h: head of the list
 *
 * Return: size_t
 **/


size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", (ptr->n));
		ptr = ptr->next;
		count++;
	}

	return (count);
}

