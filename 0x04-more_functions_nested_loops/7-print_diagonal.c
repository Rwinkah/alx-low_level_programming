#include "main.h"
void space(int i);
/**
* print_diagonal - entry point
*
*@n: input number
*
* Description: "print diagonally"
*
* Return: none
**/



void print_diagonal(int n)
{
if (n <= 0)
{
_putchar(10);
}
else
{
int i;
for (i = 0; i < n; i++)
{
space(i);
_putchar(92);
_putchar(10);
}
}
}


/**
* space - design
*
*@i: input number
*
* Description: "print space"
*
* Return: none
**/



void space(int i)
{
if (i > 0)
{
int k;
for (k = 0; k < i; k++)
{
_putchar(32);
}
}
}
