#include "main.h"

/**
* _strspn - implementation of strspn function in std library
*
*@s: string to parse through
*@accept: string of characters to find
*
*Return: int
**/


unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
unsigned int k = 0;
int l = 0;
for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] > '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			l = 1;
			break;
		}
	else
		l = 0;
	}
if (l == 0)
	{
	break;
	}
else
	{
	k++;
	}
}
return (k);
}
