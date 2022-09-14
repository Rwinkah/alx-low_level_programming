#include <stdio.h>
/**
* main - entry point
*
* Description - "print numbers from 0-89 removing repetitive occurences"
*
* Return: Always 0
**/
int main(void)
{
int c;
for (c = 0; c < 999; ++c)
{
int d = c / 100;
int e = (c / 10) % 10;
int f = c % 10;
if ((d  == e) || (e == f) || (d == f))
{
continue;
}
else
{
if ((d > e) || (e > f))
{
continue;
}
else
{
putchar('0' + d);
putchar('0' + e);
putchar('0' + f);
}
}
if (c < 789)
{
putchar(44);
putchar(32);
}
else
{
break;
}

}
putchar(10);
return (0);
}

