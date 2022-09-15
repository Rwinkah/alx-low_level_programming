#include "main.h"
/**
* print_numbers - entry point
*
* Description - "print numbers 0-9"
*
* Return: none
**/
void print_numbers(void)
{
int c;

for (c = '0'; c <= '9'; ++c)
	putchar(c);
putchar('\n');
return (0);
}
