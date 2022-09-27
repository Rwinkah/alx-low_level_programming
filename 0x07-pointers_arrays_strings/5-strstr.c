#include "main.h"

/**
* _strstr - implementation of strstr function in std library
*
*@haystack: string to parse through
*@needle: substring of characters to find
*
*Return: pointer to the substring
**/


char *_strstr(char *haystack, char *needle)
{
int count1;
int count2;
int boolean;
int position;
for (count1 = 0; haystack[count1] != '\0'; count1++)
{
if (haystack[count1] == needle[0])
{
for (count2 = 0; needle[count2] != '\0'; count2++)
{
if (haystack[count1 + count2] == needle[count2])
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
return ((haystack +  position));
}
return ('\0');
}
