#include "main.h"

/**
* _strchr - implementing the strchr function in the standard library
*
* @s: pointer to the string
* @c: character to find
* Return: s or null`
**/


char *_strchr(char *s, char c)
{
int i = 0;
for (i = 0; s[i] != '\0' ; i++)
{
if (s[i]  == c)
{
return (s + i);
}

}
return ('\0');
}
