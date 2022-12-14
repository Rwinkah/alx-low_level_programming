#include "main.h"

/**
 * clear_bit - clear a bit to zero.
 * @n: number.
 * @index: move position change.
 * Return: 1 if all ok.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int ans = 1;

if ((sizeof(unsigned long int) * 8) - 1 < index)
{
return (-1);
}
ans <<= index;
*n &= ~ans;

return (1);
}
