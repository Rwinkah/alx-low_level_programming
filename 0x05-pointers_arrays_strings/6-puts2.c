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
int cd =0;
while (*str != '\0') 
{
cd++;
}

while ((*str != '\0') && (cd > 0 ))
{
_putchar(*str);

str++;
str++;
cd--;
}



_putchar(10);
}
