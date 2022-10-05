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

if (width < 1 || height < 1)
return (NULL);
ip = malloc(height * sizeof(*ip));
if (ip == NULL)
{
free(ip);
return (NULL);
}

for (i = 0; i < height; i++)
{
ip[i] = malloc(width * sizeof(**ip));
if (ip[i] == 0)
{
free(ip[i]);
free(ip);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
ip[i][j] = 0;
}
}
return (ip);
}
