#include "main.h"

/**
* _isdigit - entry point
*
* Description: "check for numbers 0-9"
*
* @c: "The character to check"
* Return: "1 if capital 0 if not"
**/

int _isdigit(int c)
{
if (((c >= 48 && c <= 57)))
return (1);
else
return (0);
}
