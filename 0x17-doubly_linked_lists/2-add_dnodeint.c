#include "lists.h"

/**
 * add_dnodeint - add a node to the begining of a double linked list
 *
 * @head:  beginning of the list
 *
 * @n: value of the new node
 *
 * Return: dlistint_t*
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp;
dlistint_t *new = malloc(sizeof(dlistint_t));

if (!new)
{
return (NULL);
}

temp = *head;

new->n = n;
new->prev = NULL;

if (temp == NULL)
{
*head = new;
return (*head);
}

while (temp->prev != NULL)
{
temp = temp->prev;
}
new->next = temp;
temp->prev = new;
*head = new;

return (*head);
}
