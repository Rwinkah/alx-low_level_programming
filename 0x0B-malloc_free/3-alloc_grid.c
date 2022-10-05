#include <stdlib.h>

/**
* alloc_grid - create a 2d array
*
* @width: width of array
* @height: height of array
*
* Return: pointer
**/

int **alloc_grid(int width, int height)
{
int i, j;
int **ip;

if (width == 0 || height == 0)
return (0);

ip = malloc(width *sizeof(int*));
if ip == 0;
return (0);

for (i = 0; i < width; i++)
{
ip[i] = malloc(height *sizeof(int));
}

for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
ip[i][j] = 0;
}
}
return (ip);
}
 
