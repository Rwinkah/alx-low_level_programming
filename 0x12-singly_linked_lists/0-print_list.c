#include "lists.h"
/**
 * print_list - print all elements of a linked list
 * @h: start of the list
 *
 * Return: int
 **/


size_t print_list(const list_t *h)
{
int i = 0;
const list_t *ptr = h;


while (ptr != NULL)
{
i++;
if (ptr->str)
{
printf("[%d] %s\n", ptr->len, ptr->str);
}

else
{
printf("[0] (nil)\n");
}

ptr = ptr->next;
}

return (i);
}
