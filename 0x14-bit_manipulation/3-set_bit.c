#include "main.h"

/**
 * set_bit - change a bit value to 1 at a position
 * @n: number to change
 * @index: position to change
 *
 * Return: int
**/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int ans = 1;
if (sizeof(unsigned long int) * 8 < index)
{
return (-1);
}

ans <<= index;

*n = *n | ans;

return (ans);
}
