#include "lists.h"

/**
 * pop_listint - return and delete the head of a list
 *
 * @head: head of the list
 *
 * Return: int
 **/

int pop_listint(listint_t **head)
{
int answer;
listint_t *clear;

if (!*head || !head)
{
return (0);
}
answer = (*head)->n;
clear = (*head);
(*head) = (*head)->next;
free(clear);
return (answer);
}
