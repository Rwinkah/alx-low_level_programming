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

    for (c = 0; c < 90; ++c)
{
    int d = c / 10;
    int e = c % 10;
    
    if (d  == e)
    {
        continue;
    }
    else
    {
        if (d > e){
            continue;
        }
        else {
            putchar('0' + d);
            putchar('0' + e);

        }
    }
    
    
            
        
    if (c < 90)
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

