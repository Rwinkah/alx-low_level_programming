#include <stdlib.h>
#include <stdio.h>


/**
 * op_add - add two ints
 * @a: first int
 * @b: second int
 *
 * Return: int
 **/



int op_add(int a, int b)
{
return (a + b);
}



/**
 * op_sub - difference of two ints
 * @a: first int
 * @b: second int
 *
 * Return: int
 **/



int op_sub(int a, int b)
{
return (a - b);
}


/**
 * op_mul - multiply two ints
 * @a: first int
 * @b: second int
 *
 * Return: int
 **/



int op_mul(int a, int b)
{
return (a * b);
}



/**
 * op_div - floor division of two ints
 * @a: first int
 * @b: second int
 *
 * Return: int
 **/



int op_div(int a, int b)
{
if (b == 0 || a == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}


/**
 * op_mod - remainder of division of two ints
 * @a: first int
 * @b: second int
 *
 * Return: int
 **/



int op_mod(int a, int b)
{
if (b == 0 || a == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
