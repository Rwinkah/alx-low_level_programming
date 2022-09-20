#include "main.h"


/**
*_strlen - counts the string length
*
*@s: the string argument for the function
*
*
*Return: int
**/

int _strlen(char *s)
{
int j = 0;
while (*s != '\0')
{
s++;
j++;
}
return ((j));
}
