#include "main.h"

/**
* print_sign - entry point
*
* Description: "check for number sign"
*
* @n: "The number to check"
* Return: "success = 0"
**/

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else
{
if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
}
