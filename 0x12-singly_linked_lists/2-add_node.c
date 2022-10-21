#include "lists.h"






/**
 * _strlen - count string
 * @str: pointer
 *
 * Return: int
 **/

int _strlen(const char *str)
{
int i = 0;
while (*str != '\0')
{
i++;
str++;
}
return (i);
}



/**
 * add_node - add a node to begining
 *
 * @head: double pointer to node
 * @str: strin to initialize
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
temp->len = _strlen(str);
temp->str = strdup(str);
*head = temp;

return (*head);
}
