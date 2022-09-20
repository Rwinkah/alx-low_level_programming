#include "main.h"

/**
* print_rev - print a string in reverse
*
* @s: string pointer to be used
*
* Return: void
**/

void print_rev(char *s)
{
int j = 0;
while (*s != '\0')
{
s++;
j++;
}

while (j != 0)
{
s--;
_putchar(*s);
j--;
}

_putchar(10);
}
