#include "main.h"



/**
 * binary_to_uint - convert binary to uint
 *
 * @b: start of string representation of binary
 *
 * Return: unsigned int
 **/

unsigned int binary_to_uint(const char *b)
{
int strlen;
int i = 0, sum = 0;
int value = 1;
for (strlen = 0; b[strlen] != '\0'; strlen++)
;
i = strlen - 1;
for (; i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
if (b[i] == '1')
{
sum += value;
}
value *= 2;
}
return (sum);;
} 
