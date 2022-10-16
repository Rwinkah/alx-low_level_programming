#include <stdio.h>
#include <stdarg.h>



/**
* rand_func - handling separator
* @i: current arg
* @flag: first arg?
*
* Return: voif
**/

void rand_func(int i, int flag)
{
if (i && flag)
{
printf(", ");
}
}


/**
 * print_all - print all valid inputs
 *
 * @format: string of format specifier
 *
 * Return: void
**/


void print_all(const char *const format, ...)
{
int i = 0, flag = 0;
char *string;
va_list list;
va_start(list, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
rand_func(i, flag);
flag++;
printf("%c", va_arg(list, int));
break;

case 'f':
rand_func(i, flag);
flag++;
printf("%f", va_arg(list, double));
break;

case 'i':
rand_func(i, flag);
flag++;
printf("%d", va_arg(list, int));
break;

case 's':
rand_func(i, flag);
flag++;
string = va_arg(list, char *);
if (!string)
string = "(nil)";

printf("%s", string);
break;
} i++;
}
va_end(list);
printf("\n");
}
