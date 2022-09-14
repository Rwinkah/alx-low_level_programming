#include <stdio.h>
/**
* main - entry point
*
* Description - "print numbers from 0-9"
*
* Return: Always 0
**/
int main(void)
{
int c;

for (c = 0; c < 10; ++c)
{
	putchar('0' + c);
	if (c < 9)
{
	putchar(44);
	putchar(32);
}
else
{
break;
}
}
putchar('\n');
return (0);
}
