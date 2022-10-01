#include <stdio.h>


void table(int, int);
void times_table(void)
{
int i;
for (i = 0; i < 10; i++)
{
int k;
table(k, i);
putchar(10);
}
}

void table(int k, int i)
{
for (k = 0; k < 10; k++)
{
int d = (i * k);
int e = (d / 10);
int f = (d % 10);
if (d < 10)
{
putchar('0' + f);
if (k == 9)
continue;
if (((k + 1) * i) <= 9)
{
putchar(44);
putchar(46);
putchar(46);
}
else
{
if (((k + 1) * i) > 9)
{
putchar(44);
putchar(46);
}
else
continue;
}
}
else
{
putchar('0' + e);
putchar('0' + f);
if (k < 9)
{
putchar(44);
putchar(46);
}
else
continue;
}
}
}
~
