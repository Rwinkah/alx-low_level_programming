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
 * add_node_end - add node to end
 *
 * @head: double pointer to node
 * @str: string for new node
 *
 * Return: pointer
 **/


list_t *add_node_end(list_t **head, const char *str)
{
list_t *ptr;
list_t *temp;
temp = malloc(sizeof(list_t));
if (!temp)
{
free(temp);
return (NULL);
}

else
{
temp->str = strdup(str);
if (!(temp->str))
{
free(temp);
return (NULL);
}
temp->len = _strlen(str);
temp->next = NULL;
}

if (!(*head))
{
*head = temp;
}
else
{
ptr = *head;

while (ptr->next)
{
ptr = ptr->next;
}
ptr->next = temp;
}
return (temp);
}





