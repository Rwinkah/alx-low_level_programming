#include <stdlib.h>

/**
* malloc_checked - allocate space using malloc and check for errors
*
* @b: byte size
*
* Return: void pointer
**/

void *malloc_checked(unsigned int b)
{
int *p = malloc(b);
if (p == NULL)
exit(98);

else
return (p);
}
