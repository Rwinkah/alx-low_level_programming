#include "lists.h"

/**
 * add_dnodeint_end - add a node to the begining of a double linked list
 *
 * @head:  beginning of the list
 *
 * @n: value of the new node
 *
 * Return: dlistint_t*
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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

while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
new->prev = temp;


return (new);
}
