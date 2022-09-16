#include "main.h"
void space(int i, int n);
/**
* print_triangle - entry point
*
*@size: input number
*
* Description: "print triangle"
*
* Return: none
**/



void print_triangle(int size)
{
if (size <= 0)
{
_putchar(10);
}
else
{
int i;
int k;

for (i = 0; i <= size; i++)
{
if (i == 0)
continue;
space(i, size);
for (k = 0; k < i; k++)
{
_putchar(35);
}
_putchar(10);
}
}
}


/**
* space - design
*
*@size: input number
*
*@i: count number
* Description: "print space"
*
* Return: none
**/



void space(int i, int size)
{
if (i != 10)
{
int k;
for (k = 0; k < (size - i); k++)


{
_putchar(32);
}
}
}