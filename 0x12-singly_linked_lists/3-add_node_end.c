#include "lists.h"

/**
 * add_node_end - add node to end
 *
 * @head: double pointer to node
 * @str: string for new node
 *
 * Return: pointer
 **/


list_t *add_node_end(list_t **head, char *str)
{
list_t *ptr = *head;
list_t *temp = NULL;

while (*ptr->next != NULL)
{
ptr = ptr->next;
}

temp = malloc(sizeof(list_t));
if (!(temp))
{
return (NULL);
}
temp->str = strdup(str);
temp->next = NULL

ptr->next = temp;

return (ptr->next);
}
