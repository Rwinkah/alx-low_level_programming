#include "lists.h"

/**
 * sum_listint  - sum all int in a linked list
 * @head: beginning of the list
 *
 * Return: int
 **/


int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *ptr = head;

while (ptr)
{
sum += ptr->n;
ptr = ptr->next;
}

return (sum);
}
