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
if (c > 0)
{
c = c;
}
else
{
c = c *-1;
}
_putchar('0' + c % 10);
return (c % 10);
}
