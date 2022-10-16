#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *p;
va_start(ap, n);

for (i = 0; i < n; i++)
{

p = va_arg(ap, char *);
if (p)
{
printf("%s", p);
}
else
{
printf("(nil)");
}

if ((i < n - 1) && seperator)
{
printf("%s", separator);
}

}

va_end(ap);
putchar(10);
}
