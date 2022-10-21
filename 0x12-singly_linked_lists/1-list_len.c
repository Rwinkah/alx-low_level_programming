#include "lists.h"
/**
 * list_len - return the number of elements of a linked list
 * @h: start of the list
 *
 * Return: size_t
 **/


size_t list_len(const list_t *h)
{
int i = 0;
const list_t *ptr = h;


while (ptr != NULL)
{
i++;
ptr = ptr->next;
}

return (i);
}
