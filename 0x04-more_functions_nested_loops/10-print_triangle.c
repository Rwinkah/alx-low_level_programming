#include "main.h"
void space(int i, int n);
/**
* print_triangle - entry point
*
*@n: input number
*
* Description: "print triangle"
*
* Return: none
**/



void print_triangle(int n)
{
if (n <= 0)
{
_putchar(10);
}
else
{
int i;
int k;

for (i = 0; i <= n; i++)
{
if (i == 0)
continue;
else
{
space(i, n);
for (k = 0; k < i; k++)
{
_putchar(32);
}
_putchar(10);
}

}

}
}


/**
* space - design
*
*@n: input number
*
*@i: count number
* Description: "print space"
*
* Return: none
**/



void space(int i, int n)
{

if (i != 10)
{
int k;
for (k = 0; k < (n - i); k++)
{
_putchar(46);
}
}
}
