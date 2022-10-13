#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: int
**/


int main(int argc, char *argv[])
{

int x, y;
int (*op_ptr)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}

op_ptr = get_op_func(argv[2]);

if (op_ptr == NULL)
{
printf("Error\n");
exit(99);
}

x = atoi(argv[1]);
y = atoi(argv[3]);
printf("%d\n", op_ptr(x, y));

return (0);
}
