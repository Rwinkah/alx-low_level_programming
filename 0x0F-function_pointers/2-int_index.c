#include <stdio.h>

/**
 * int_index - find an int
 *
 * @array: array to search
 * @size: size of the array
 * @cmp: compare function
 *
 * Return: int
 **/


int int_index(int *array, int size, int (*cmp)(int))
{

if (cmp != NULL && array != NULL)
{
int i = 0;

if (size <= 0)
{
return (-1);
}

while (i < size)
{
if (cmp(array[i]) != 0)
{
return (i);
}
else
i++;
}
}

return (-1);
}
