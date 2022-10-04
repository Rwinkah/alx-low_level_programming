#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - concatenate two strings
* @s1: string 1
* @s2: string 2
*
* Return: pointer to the new string
**/

char *str_concat(char *s1, char *s2)
{
int i, j, k, l, m;
char *p;
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
l = j + 1 + i;
p = malloc(l *sizeof(char));

for (k = 0; k < i; k++)
{
p[k] = s1[k];
}

for (m = 0; m <= j; m++)
{
p[k + m] = s2[m];
}

return (p);
}
