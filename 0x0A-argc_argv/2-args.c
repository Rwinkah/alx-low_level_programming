#include <stdio.h>

/**
* main - program printing all values of argv
*
* @argc: number of arguments passed to the program
* @argv: pointer to array of arguments
*
* Return: int
**/

int main(int argc, char *argv[])
{

int i;

for (i = 0; i < argc; i++)

printf("%s\n", argv[i]);
return (0);
}
