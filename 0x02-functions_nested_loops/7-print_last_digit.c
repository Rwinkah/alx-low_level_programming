#include "main.h"

/**
* print_last_digit - entry point
*
* Description: "prints last digit of a number"
*
* @c: "The number to check"
*
* Return: "success = 0"
**/
int print_last_digit(int c)
int d;
{
if (c > 0)
{
c = c;
}
else
{
c = c *-1;
}
d = c % 10;
_putchar ('0' + d);
return (d);
}
