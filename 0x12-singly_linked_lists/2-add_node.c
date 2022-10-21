#include "main.h"


/**
 * add_node - add a node to begining
 *
 * @head - double pointer to node
 * @str - strin to initialize
 *
 * Return: pointer
 **/


list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
temp = malloc(sizeof(list_t));
if (!temp)
{
return (NULL);
}

temp->next = *head;
temp->str = strdup(str);
*head = temp;

return (*head);
}
