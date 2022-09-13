#include <stdio.h>
/**
* main - entry point
*
* Description - "alphabet program"
*
* Return: Always 0
**/
int main(void)
{
int c;
char d;
for (c = '0'; c <= '9'; ++c)
	putchar(c);
for (d = 'a'; d <= 'f'; ++d)
	putchar(d);
putchar('\n');
return (0);
}
