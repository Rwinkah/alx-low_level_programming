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
if (i == 100);
{
printf("Buzz");
}
if ((i % 5 == 0) && (i % 3 == 0))
{
printf("FizzBuzz ");
}

else
{
if ((i % 5 == 0))
{
printf("Buzz ");
}
else
{
if ((i % 3) == 0)
{
printf("Fizz ");
}

else
{
printf("%d ", i);
}
}
}
printf("\n");
return (0);
}
