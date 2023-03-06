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

if (!h)
{
return (0);
}

while (h)
{
printf("%d\n", h->n);
h = h->next;
ans++;
}
return (ans);
}
