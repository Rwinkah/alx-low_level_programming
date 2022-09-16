#include "main.h"
/**
* print_line - entry point
*@n: input number
* Description: "print a line"
* Return: none
**/

void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i != n; i++)
{
_putchar(95);
}
_putchar(10);
}

else
{
_putchar(10);
}
}
