#include "variadic_functions.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    putchar(10);
    print_numbers("; ", 5, 30, 938, -123024, 43402, 0);
    return (0);
}
