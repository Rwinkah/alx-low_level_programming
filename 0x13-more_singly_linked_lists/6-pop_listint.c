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
int answer = (*head)->n;
free(*head);
return(answer);
}
