#include "lists.h"

/**
 * print_dlistint - print all variables of a doubly linked list
 *
 * @h: pointer to the head of the list
 *
 * Return: size_t
 **/

size_t print_dlistint(const dlistint_t *h)
{
size_t ans = 0;
const dlistint_t *temp = malloc(sizeof(dlistint_t));
temp = h;

if (!temp)
{
return (0);
}

while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
ans++;
}

return (ans);
}
