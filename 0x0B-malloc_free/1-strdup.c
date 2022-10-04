#include <stdlib.h>
#include <stdio.h>
/**
* _strdup - copy parameter string into new memory space
*
* @str: string pointer
*
* Return: pointer char
**/

char *_strdup(char *str)
{
char *p;
int i, j = 0;

if (str == NULL)
{
return (0);
}
for (; str[j] != '\0'; j++)
;
p = malloc(j + 1);

if (p == 0)
{
return (NULL);
}

for (i = 0; i < j; i++)
{
p[i] = str[i];
}
return (p);
}
