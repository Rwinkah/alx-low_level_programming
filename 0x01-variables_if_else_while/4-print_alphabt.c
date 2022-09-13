#include <stdio.h>
/**
* main - entry point*
* Description : "alphabet program"
*
* Return: Always 0
**/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
	if (c == 'e' || c == 'q')
{
		continue;
}
	else
{
		putchar(c);
}
putchar('\n');
return (0);
}
