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
int j = 0;

while (*str != '\0')
{
_putchar(*str);
str++;
}

_putchar(10);
}
