#include "main.h"

/**
* more_numbers - entry point
*@n: input number
* Description: "print numbers"
* Return: none
**/

void wrap(int n);
void more_numbers(void)
{
int c;
int i;
for (i = 0; i < 10; i++)
{
for (c = 0; c <= 14; ++c)
{
int d = (c / 10);
int e = (c % 10);
if (c <= 9)
{
wrap(e);
}
else
{
wrap((d));
wrap((e));
}
}
_putchar(10);
}
}


/**
 * wrap - around _putchar
 *
 * @n: input
 *
 * Description: abstract putchar
 *
 * Return: void
 *
 **/
void wrap(int n)
{
_putchar('0' + n);
}
