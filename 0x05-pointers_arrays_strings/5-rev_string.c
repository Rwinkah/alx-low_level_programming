#include "main.h"

/**
* rev_string -  string reverse
*
* @s: string pointer to be used
*
* Return: void
**/

void rev_string(char *s)
{
int j = 0;
char str[30];
int i = 0;

while (*s != '\0')
{
str[j] = *s;
s++;
j++;
}
while (j != 0)
{
j--;
*s[i] = str[j];
i++;
}
}
