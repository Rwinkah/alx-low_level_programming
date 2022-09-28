#include "main.h"


/**
* _puts_recursion - recursively print a string
*
* @s: pointer to the start of the string
*
* Return: void
**/


void _puts_recursion(char *s)
{
char n = *s;


if (n == '\0')
{
_putchar(10);
return;
}


_putchar(n);
s++;

_puts_recursion(s);
}
