#include "main.h"

/**
*
* cap_string - capitalize each word in a string
* 
* @n: string input
* 
* Return: string
**/

char *cap_string(char *n)
{
int ln = sizeof(n),i;
if (n[0] >= 'a' && n[0] <= 'z')
{
n[0] = n[0] - 32;
}

for (i = 0; i < ln; i++)
{
if (n[i-1] == " " || n[i-1] == "," || n[i-1] == ";" || n[i-1] == ".")
{
n[i] -= 32;
}
if (n[i-1] == "?" || n[i-1] == '"' || n[i-1] == "!" || n[i-1] == "(")
{
n[i] -= 32;
}
if (n[i-1] == 10 || n[i-1] == "{" || n[i-1] == "}" || n[i-1] == ")")
{
n[i] -= 32;
}
if (n[i-1] == 9) 
{
n[i] -= 32;
}
}
return (n);
}

