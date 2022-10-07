#include <stdlib.h>

/**
* array_range - create an array of int initialized to a range of int
* @min: max range
* @max: max range
*
* Return: int pointer
**/

int *array_range(int min, int max)
{
int *p, i, j;

if (min > max)
{
return (NULL);
}

j = (max - min) + 1;
p = malloc(j *sizeof(int));
if (p == 0)
{
return (NULL);
}

for (i = 0; i <= j ; i++, min++)
{
p[i] = min;

}

return (p);
}
