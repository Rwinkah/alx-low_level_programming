#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at an index
 * @index: point to delete
 * @head: beginning of list
 *
 * Return: int
 **/



int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *front;
listint_t *back;
listint_t *ptr = (*head);
unsigned int i = 0;

if (!*head || !head)
{
return (-1);
}



if (index == 0)
{
(*head) = (*head)->next;
free(ptr);
return (1);
}
while (i < (index - 1))
{
ptr = ptr->next;
i++;
}

back = ptr;

ptr = ptr->next;

front = ptr->next;
if (!front)
{
return (-1);
}


free(ptr);

back->next = front;

return (1);
}
