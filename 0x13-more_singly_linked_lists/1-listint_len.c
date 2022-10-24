#include "lists.h"


/**
 * listint_len - return the number of elemnts in a list
 * @h: head of the list
 *
 * Return: size_t
 **/


size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t len = 0;

	while (ptr)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
