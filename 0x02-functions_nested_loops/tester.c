#include <stdio.h>


/**
* times_table - function using _putchar to print
*
* Description: "print times table"
*
* Return: no return
*
**/
void supplement(int,int);
void main(void)
{
int i;
for (i = 0; i < 10; i++)
{
int k;
supplement(k,i);
putchar(10);             
}
}





void supplement(int k, int i){
    for (k = 0; k < 10; k++)
{
int d = i * k;
int e = d / 10;
int f = d % 10;
if (d < 10)
{
putchar('0' + f);
if (k == 9)
continue;
if(((k+1)*i) <= 9)
{
putchar(44);
putchar(46);
putchar(46);
}
else
{
if(((k+1)*i) > 9){
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