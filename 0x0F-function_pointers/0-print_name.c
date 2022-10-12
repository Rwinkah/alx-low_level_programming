#include <stdio.h>

/**
* print_name - print a name using a function
*
* @name: name to be printed
*
* @f: function to print name
*
* Return: void
**/


void print_name(char *name, void (*f)(char *))
{

if (f == NULL)
{
return;
}
f(name);
}
