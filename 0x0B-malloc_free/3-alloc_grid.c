#include <stdlib.h>

/**
* alloc_grid - create a 2d array
*
* @width: width of array
* @height: height of array
*
* Return: pointer
**/

int **alloc_grid(int width, int height);
{
int **ip = malloc(width *sizeof(int));

for (i = 0; i < 3; i++)
{
ip[i] = malloc(height *sizeof(int));
}

for (i = 0; i < width; i++)
{
for (j = 0; k < height; j++)
{
ipp[i][j] = 0;
}
}
return (ipp);
}
 
