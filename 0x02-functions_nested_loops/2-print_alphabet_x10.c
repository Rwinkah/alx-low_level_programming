#include "main.h"

/**
* print_alphabet_x10 - entry point
*
* Description: "output string"
*
* Return: "success = 0"
**/

void print_alphabet_x10(void)
{
int i;
int j = 0;

while (j < 10){ 
i = 97;
	while (i <= 122){
	_putchar(i);
	i++;

}
_putchar(10);
j++;

}
}
