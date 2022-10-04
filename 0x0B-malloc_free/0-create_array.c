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
p = (char *)malloc(sizeof(char) * size);

for (i = 0; i < size; i++)
{
p[i] = c;
}
if (p == NULL)
{
return (NULL);
}
return (p);
}
