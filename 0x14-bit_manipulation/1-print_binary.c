#include "main.h"



/**
 * print_binary - print the binary form of a number
 * @n: decimal int
 *
 * Return: void
 **/



void print_binary(unsgined long int n)
{
if (n > 1)
print_binary(n >> 1);
(n & 1) ? _putchar('1') : _putchar('0');
}
