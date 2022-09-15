#include "main.h"

/**
* times_table - function using putchar to print
*
*@i: param
* Description: "print times table"
*
* Return: no return
*
**/


void table(int i);
void times_table(void)
{
int i;
for (i = 0; i < 10; i++)
{
table(i);
_putchar(10);
}
}


/**
* table - function split because betty is petty
*
* @i:  counter 2
*
* Description: "print times table"
*
* Return: no return
*
**/

void table(int i)
{
int k;
for (k = 0; k < 10; k++)
{
int d = (i * k);
int e = (d / 10);
int f = (d % 10);
if (d < 10)
{
_putchar('0' + f);
if (k == 9)
continue;
if (((k + 1) * i) <= 9)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
else
{
if (((k + 1) * i) > 9)
{
_putchar(44);
_putchar(32);
}
else
continue;
}
}
else
{
_putchar('0' + e);
_putchar('0' + f);
if (k < 9)
{
_putchar(44);
_putchar(32);
}
else
continue;
}
}
}

