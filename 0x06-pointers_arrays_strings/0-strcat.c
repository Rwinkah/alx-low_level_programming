#include "main.h"
/**
* _strcat - string concatenation function
*
* @dest: char array to hold the first string
* @src: char array to hold the second string
*
*Return: Returns a pointer to the combined string stored in dest
**/


char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
int k;
while (dest[i] != '\0')
{
dest++;
i++;
}

while (src[j] != '\0')
{
src++;
j++;
}

for (k = 0; k <= j; k++)
{
dest[i + k] = src[k];
}
dest[i + k + 1] = '\0';
return (dest);
}
