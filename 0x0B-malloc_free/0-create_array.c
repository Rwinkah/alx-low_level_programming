#include <stdlib.h>
/**
* create_array - allocate a memory location
*
* @size: size of the memory location
* @c: char to initialize memory
*
* Return: char pointer
**/


char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;

if (size == 0)
{
return ('\0');
}
p = malloc(sizeof(char) * size);
if (p == 0)
{
return (0);
}
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
