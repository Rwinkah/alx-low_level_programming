#include "lists.h"

/**
 * get_nodeint_at_index - return a node at a given index
 * @head: beginning of the list
 * @index: node to find
 *
 * Return: pointer
 **/



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ptr = head;
unsigned int i = 0;




if (!head)
{
return (NULL);
}

while (i < index)
{
ptr = ptr->next;
i++;
}

if (!ptr)
{
ptr =  NULL;
}

return (ptr);
}

