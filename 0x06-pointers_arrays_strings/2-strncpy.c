#include "main.h"

/**
*_strncpy - copies n bytes of str to dest
*
*@dest: pointer to destination array
*@src: pointer to source array
*@n:number of bytes
*
*Return: pointer to destination
**/

char *_strncpy(char *dest, char *src, int n)
{
int j;

for (j = 0; (j < n && src[j] != '\0'); j++)
{
dest[j] = src[j];
}
while (j < n)
{
dest[i] = '\0';
j++;
}
return (dest);

}
