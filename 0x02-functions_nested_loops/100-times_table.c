#include "main.h"

/**
* print_times_table - function using putchar to print
*
*@i: param
*@n: param
* Description: "print times table"
*
* Return: no return
*
**/

int condtn(int i, int n)
void table(int i);
void print_times_table(int n)
{
int i;
for (i = 0; i < 10; i++)
{
condtn(i, n);
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


/**
* condtn - "Less than 15 and greater than 0"
*
* @l: input parameter
*
* Description: "check for condition"
*
* Return: "value"
**/

int condtn(int i, int n)
{
if ((l > 0) && (l <= 15))
{
table(i, n);
}
else
{
return (1); 
