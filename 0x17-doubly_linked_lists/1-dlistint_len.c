#include "lists.h"

/**
 * dlistint_len - print all variables of a doubly linked list
 *
 * @h: pointer to the head of the list
 *
 * Return: size_t
 **/

size_t dlistint_len(const dlistint_t *h)
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
temp = temp->next;
ans++;
}

return (ans);
}
