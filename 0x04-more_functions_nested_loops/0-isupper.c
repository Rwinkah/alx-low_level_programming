#include "main.h"

/**
* _isupper - entry point
*
* Description: "check for uppercase letters"
*
* @c: "The character to check"
* Return: "1 if capital 0 if not"
**/

int _isupper(int c)
{
if (((c >= 65 && c <= 90)))
return (1);
else
return (0);
}
