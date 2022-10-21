#include "lists.h"



/**
 * free_list - free linked list
 *
 * @head: pointer to a list
 *
 * Return: void
 **/




void free_list(list_t *head)
{

if (!head)
{
return;
}

if (head->next != NULL)
{
free_list(head->next);
}
free(head->str);
free(head);
}
