#include "main.h"

/**
*swap_int - int swap function
*
*
*@a: first variable 
*@b: second variable
*
*Return: void
**/
void swap_int(int *a, int *b)
{
int c = *a;
int d = *b;

*b = c;
*a = d;
}

