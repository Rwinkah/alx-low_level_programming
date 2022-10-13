#include "3-calc.h"
#include <string.h>
#include <stdio.h>


/**
 * get_op_func - return the apropriate function
 *
 * @s: operator
 * Return: function
 **/


int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = { {"+", op_add}, {"-", op_sub}, {"*", op_mul},
{"/", op_div}, {"%", op_mod}, {NULL, NULL} };


while (i < 6)
{
if (strcmp(s, ops[i].op) == 0)
{
return (ops[i].f);
}
i++;
}
return (ops[5].f);
}
