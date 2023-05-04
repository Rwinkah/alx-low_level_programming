#include "main.h"

/**
* _strpbrk - implementation of strpbrk function in std library
*
*@s: string to parse through
*@accept: substring of characters to find
*
*Return: pointer to the substring
**/


char *_strpbrk(char *s, char *accept)
{
int count1;
int count2;
int boolean;
int position;
for (count1 = 0; s[count1] != '\0'; count1++)
{
if (s[count1] == accept[0])
{
for (count2 = 0; accept[count2] != '\0'; count2++)
{
if (s[count1 + count2] == accept[count2])
{
position = count1;
boolean = 1;
}

else
{
boolean = 0;
break;
}
}
}

if (boolean == 1)
return ((s +  position));
}
return ('\0');
}
