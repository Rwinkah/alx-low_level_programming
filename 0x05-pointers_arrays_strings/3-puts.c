#include "main.h"

/**
* _puts - print a string
*
* @str: string pointer to be used
*
* Return: void
**/

void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str);
str++;
}

_putchar(10);
}
