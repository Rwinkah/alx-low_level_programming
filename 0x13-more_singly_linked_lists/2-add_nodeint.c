#include "lists.h"

/**
 * add_nodeint - add a node to the beginning of the list
 *
 * @head: beginning of the list
 * @n: integer value of the node
 *
 * Return: pointer
 **/


listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp = malloc(sizeof(listint_t));

if (!temp)
{
return (NULL);
}

temp->n = n;
temp->next = *head;

*head = temp;

return (temp);
}
