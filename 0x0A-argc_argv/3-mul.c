#include <stdio.h>
#include <stdlib.h>

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
int mul; 
if (argc != 3)
{
printf("Error\n");
return (1);
}
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
return (0);
}
