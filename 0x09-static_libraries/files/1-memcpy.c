#include "main.h"

/**
* _memcpy - implementation of the memcpy function in c
*
* @dest: pointer to destination address
* @src: pointer to source address
* @n: number of bytes to copy from source
*
*Return: char pointer
**/


char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
{

*(dest + i) = *(src + i);
}
return (dest);
}




