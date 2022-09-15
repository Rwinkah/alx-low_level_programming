#include "main.h"

/**
* times_table - function using putchar to print
*
* Description: "print times table"
*
* Return: no return
*
**/
void times_table(void)
{
int i;
for (i = 0; i < 10; i++)
{
int k;
for (k = 0; k < 10; k++)
{
int d = i * k;
int e = d / 10;
int f = d % 10;
if (d < 10)
{
_putchar('0' + f);
_putchar(44);
_putchar(32);
_putchar(32);
}
else
{
_putchar('0' + e);
_putchar('0' + f);
_putchar(44);
_putchar(32);
_putchar(32);
}
}
_putchar(10);
}
}