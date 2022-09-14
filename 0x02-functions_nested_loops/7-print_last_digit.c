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
{
int d;
d = c % 10;

if (d > 0)
{
d = d;
}
else
{
d = d *-1;
}
_putchar ('0' + d);
return (d);
}
