#include "main.h"

/**
* *_strncat - adds n number of characters from src to dest
*
* @dest: destination string
* @src: source string
* @n: number of characters

* Return: pointer to destination
**/

char *_strncat(char *dest, char *src, int n)
{
/* variables to be used*/
int i;
int k;

/* count dest length */
for (i = 0; dest[i] != '\0'; i++)
;

/* input n bytes in dest */
for (k = 0; k < n && src[k] != '\0'; k++)
{
dest[i + k] = src[k];
}
dest[i + k] = '\0';
return (dest);
}
