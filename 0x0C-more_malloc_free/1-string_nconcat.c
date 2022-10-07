#include <stdlib.h>

/**
* string_nconcat - concatenate n bytes from string 2 to string 1
*
* @s1: string 1
* @s2: string 2
* @n: number of bytes
*
* Return: char pointer
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1l, s2l;
unsigned int i, mem, j;
char *p;

for (s1l = 0; s1[s1l] != '\0'; s1l++)
;
for (s2l = 0; s2[s2l] != '\0'; s2l++)
;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

if (n >= s2l)
{
mem = s2l + s1l;
}
else
{
mem = s1l + n;
}
p = (char *)malloc(mem);
if (p == 0)
{
return (NULL);
}

for (i = 0; s1[i] != '\0'; i++)
{
p[i] = s1[i];
}

for (j = 0; s2[j] != '\0'; j++)
{
p[i + j] = s2[j];
}
p[i + j] = '\0';
return (p);
}
