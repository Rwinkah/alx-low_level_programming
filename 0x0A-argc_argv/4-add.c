#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - program multiplying two ints
*
* @argc: number of arguments passed to the program
* @argv: pointer to array of arguments
*
* Return: int
**/

int main(int argc, char *argv[])
{
int i, sum = 0;
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
