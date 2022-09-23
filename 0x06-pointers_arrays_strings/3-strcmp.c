#include "main.h"

/**
* _strcmp - compare two strings using ASCII value of characters
*
* 
* @s1: first string
* @s2: second string
*
* return: int
**/

int _strcmp(char *s1, char *s2)
{
int i, r;

if (sizeof(s1) > sizeof(s2))
r = sizeof(s1);

else 
r = sizeof(s2);

for (i = 0; i < r; i++)
{
if (s1[i] == s2[i])
continue;

else
{
if (s1[i] < s2[i])
return (-15);

else
{
if (s1[i] > s2[i])
return (15);
}
}
}

return (0);
}
