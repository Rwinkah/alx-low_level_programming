#include "main.h"
/**
* print_most_numbers - entry point
*
* Description: "print number 0-9 except 2 and 4"
*
* Return: none
**/
void print_most_numbers(void)
{
int c;

for (c = '0'; c <= '9'; ++c)
{
if (c == 2 || c == 4)
{
continue;
}
else
{
_putchar(c);
}

}
_putchar(10);
}
