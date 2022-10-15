#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers in a list
 *
 * @n: number of arguments
 * @seperator: seperator for numbers
 *
 * Return: int
**/


void print_numbers(const char *seperator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);

if (seperator != NULL)
{

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i < n-1)
{
printf("%s", seperator);
}
}
}

else
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
}
}
putchar(10);
va_end(ap);
}
