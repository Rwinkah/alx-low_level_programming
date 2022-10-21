#include "main.h"



/**
 * free_list - free linked list
 *
 * @head: pointer to a list
 *
 * Return: void
 **/




void free_list(list_t *head)
{
list_t *ptr, clear;

ptr = head;
while (ptr != NULL)
{
clear = ptr;
ptr = ptr->next;
free(clear);
}
}