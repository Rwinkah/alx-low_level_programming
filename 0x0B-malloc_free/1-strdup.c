#include <stdlib.h>

/**
* _strdup - copy parameter string into new memory space
*
* @str: string pointer
*
* Return: pointer char
**/ 

char *_strdup(char *str)
{
char *p = malloc(sizeof(str));
p = str;
return (p);
}
