#include <stdio.h>
/**
* main- entry point
* Description: "sort  multiples of 3 and 5"
* Return: int
**/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
if ((i % 3) == 0)
{
printf("Fizz ");
}
else
{
if ((i % 5 == 0))
{
printf("Buzz ");
}
else
{
if ((i % 5 == 0) && (i % 3 == 0))
{
printf("FizzBuzz");
}
else
{
printf("%d ", i);
}
}
}
return (0);
}
