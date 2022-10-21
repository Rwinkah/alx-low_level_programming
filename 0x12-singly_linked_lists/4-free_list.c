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
list_t *ptr;
list_t *clear;

ptr = head;

if (ptr->next != NULL)
{
free_list(ptr->next);
}
free(ptr->next);
free(ptr);
}
