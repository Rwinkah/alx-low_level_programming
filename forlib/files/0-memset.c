#include "main.h"

/**
* _memset - implementation of the memset function in string.h
*
* @s: pointer to the memory location
* @b: byte to be put in memory
* @n: number of memory locations to access
*
* Return: pointer to memory area
**/



char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}

return (s);
}
