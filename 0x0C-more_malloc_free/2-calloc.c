#include <stdlib.h>
/**
* _calloc - implementation of calloc
*
* @nmemb: number of units
* @size: size of each unit
*
* Return: void pointer
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
char *mem;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
p = malloc(nmemb * size);
if (p == 0)
{
return (NULL);
}

mem = p;
for (i = 0; i < sizeof(p); i++)
{
mem[i] = 0;
}

return (mem);
}
