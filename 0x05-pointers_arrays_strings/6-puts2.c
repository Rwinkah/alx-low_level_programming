#include "main.h"

/**
*puts2 - print a string in alternation
*
* @str: string pointer to be used
*
* Return: void
**/

void puts2(char *str)
{
int j = 0;
while (*str != '\0')
{
_putchar(*str);

str++;
j++;
j++;
}



_putchar(10);
}
