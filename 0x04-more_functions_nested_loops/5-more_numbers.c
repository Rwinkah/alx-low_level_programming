#include "main.h"

/**
* more_numbers - entry point
*
* Return: none
**/
void more_numbers(void)
{
int c;
int i;

for (i = 0; i < 10; i++)
{
for (c = 0; c <= 14; ++c)
{
if (c <= 9)
{
_putchar('0' + c);
}
else 
{
_putchar('0' + (c / 10));
_putchar('0' + (c % 10));
}
}
_putchar(10);
}
}
