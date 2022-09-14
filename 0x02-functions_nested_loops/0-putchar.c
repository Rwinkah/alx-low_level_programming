#include "main.h"

/**
* main - entry poiny
*
* Description: "output string"
*
* Return: "success = 0"
**/

int print_alphabet(void)
{
char x[9] = {95, 112, 117, 116, 99, 104, 97, 114, 10};
int i = 0;
for (; i <= 8; i++)
	_putchar(x[i]);
return (0);

}
