#include "main.h"
#include <stdio.h>

/**
* fibon - print fibonacci sequence
*
* @n: number of terms
*
* Return:int 
**/

int fibon(int n)
{
if ((n == 0) || (n == 1))
{
return n;
}
int x;

x = (fibon(n - 1) + fibon(n - 2));
printf("%d ",x);
}

/**
* main - entry point
*
*
* Return: 0
**/

int main(void)
{
fibon(98);
return (0);
}
